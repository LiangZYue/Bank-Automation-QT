
#include "database.h"
QSqlDatabase database::sqliteDatabase;
database::database() {

        QString dbName = "banking_automation_sqlite_database.db";
        bool isNew = !QFile::exists(dbName); // 检测数据库文件是否存在

        if (!sqliteDatabase.isValid()) {
            sqliteDatabase = QSqlDatabase::addDatabase("QSQLITE");
            sqliteDatabase.setDatabaseName(dbName);
        }

        if (sqliteDatabase.open()) {
            if (isNew) {
                qDebug() << "检测到数据库不存在，正在执行首次初始化...";
                initial_database_definition(); // 仅在文件不存在时调用
            }
        } else {
            qDebug() << "无法打开数据库:" << sqliteDatabase.lastError().text();
        }
}

database::~database() {
    sqliteDatabase.close();
}

void database::initial_database_definition()
{
    if (!sqliteDatabase.isOpen()) {
        if (!sqliteDatabase.open()) {
            qDebug() << "无法打开数据库进行初始化:" << sqliteDatabase.lastError().text();
            return;
        }
    }

    QSqlQuery query(sqliteDatabase);

    // 1. 使用 IF NOT EXISTS 建表，防止重复创建报错
    QString createUsersTable =
        "CREATE TABLE IF NOT EXISTS users ("
        "userID INTEGER PRIMARY KEY AUTOINCREMENT,"
        "password VARCHAR(16),"
        "name VARCHAR(50),"
        "surname VARCHAR(50),"
        "balance DOUBLE,"
        "Iban VARCHAR(26),"
        "userType INT"
        ");";

    if(!query.exec(createUsersTable)) {
        qDebug() << "创建 users 表失败:" << query.lastError().text();
    }

    QString createTransactionsTable =
        "CREATE TABLE IF NOT EXISTS transactions ("
        "transactionID INTEGER PRIMARY KEY AUTOINCREMENT,"
        "transactionDate DATETIME DEFAULT CURRENT_TIMESTAMP,"
        "amountTransferred DOUBLE,"
        "senderIban VARCHAR(26),"
        "receivingPartyIban VARCHAR(26)"
        ");";

    if(!query.exec(createTransactionsTable)) {
        qDebug() << "创建 transactions 表失败:" << query.lastError().text();
    }

    // 2. 检查数据是否已经存在（幂等性检查）
    query.exec("SELECT COUNT(*) FROM users");
    if (query.next() && query.value(0).toInt() == 0) {
        qDebug() << "检测到数据库为空，正在插入演示账号...";

        // 使用事务确保初始数据插入的原子性
        sqliteDatabase.transaction();

        // 使用参数化查询插入初始数据（演示账号 1: 159*）
        query.prepare("INSERT INTO users (password, name, surname, balance, Iban, userType) "
                      "VALUES (?, ?, ?, ?, ?, ?)");

        // 账号 1
        query.addBindValue("159*");
        query.addBindValue("Admin");
        query.addBindValue("Ender");
        query.addBindValue(5000.0);
        query.addBindValue("TR123456789012345678901234");
        query.addBindValue(1); // 管理员权限
        query.exec();

        // 账号 2
        query.addBindValue("654");
        query.addBindValue("User");
        query.addBindValue("Demo");
        query.addBindValue(1000.0);
        query.addBindValue("TR000000000000000000000000");
        query.addBindValue(0); // 普通用户
        query.exec();

        if (sqliteDatabase.commit()) {
            qDebug() << "初始演示账号插入成功！";
        } else {
            sqliteDatabase.rollback();
            qDebug() << "初始数据插入失败，已回滚。";
        }
    } else {
        qDebug() << "数据库已存在记录，跳过初始化插入步骤。";
    }
}

QString database::verification(int userID)
{
    if (!sqliteDatabase.isOpen()) {
        sqliteDatabase.open();
    }

    QSqlQuery query(sqliteDatabase);
    queryString = QString("SELECT password FROM users where userID = %1").arg(userID);
    query.prepare(queryString);
    query.exec();
    query.next();
    return query.value(0).toString();
}

QSqlQuery database::interface_info_fetch(int userID)
{
    if (!sqliteDatabase.isOpen()) {
        sqliteDatabase.open();
    }

    QSqlQuery query(sqliteDatabase);
    queryString = QString("SELECT * FROM users WHERE userID = %1").arg(userID);
    query.prepare(queryString);
    query.exec();
    query.next();
    return query;
}

void database::process(QMap<QString,QVariant> interfaceMap)
{
    if (!sqliteDatabase.isOpen()) {
        sqliteDatabase.open();
    }
    QSqlQuery query(sqliteDatabase);
    queryString = QString("UPDATE users SET balance = balance - %1 where userID = %2;").arg(interfaceMap.value("amountTransferred").toDouble()).arg(interfaceMap.value("userID").toInt());
    query.prepare(queryString);
    if(query.exec())
    {
        qDebug() << "users table insert succesfully!";
    }
    queryString = QString("UPDATE users SET balance = balance + %1 where userID = %2;").arg(interfaceMap.value("amountTransferred").toDouble()).arg(interfaceMap.value("receivingPartyID").toInt());
    query.prepare(queryString);
    if(query.exec())
    {
        qDebug() << "users table insert succesfully!";
    }

    queryString = QString("INSERT INTO transactions (amountTransferred, senderIban, receivingPartyIban) values(%1, '%2', '%3');").arg(interfaceMap.value("amountTransferred").toDouble())
                      .arg(interfaceMap.value("Iban").toString())
                      .arg(interfaceMap.value("receivingPartyIban").toString());
    query.prepare(queryString);
    if(query.exec())
    {
        qDebug() << "users table insert succesfully!";
    }
}

QSqlQueryModel* database::database_query(QString parameter)
{
    if (!sqliteDatabase.isOpen()) {
        sqliteDatabase.open();
    }
    queryString = QString("SELECT transactionDate, amountTransferred, senderIban, receivingPartyIban FROM transactions WHERE senderIban = '%1' OR receivingPartyIban = '%2'").arg(parameter, parameter);
    QSqlQueryModel *model  = new QSqlQueryModel();
    model->setQuery(queryString);
    return model;
}

QSqlQuery database::check_iban(QString Iban)
{
    if (!sqliteDatabase.isOpen()) {
        sqliteDatabase.open();
    }
    QSqlQuery query(sqliteDatabase);
    queryString = QString("SELECT userID, name, surname FROM users WHERE Iban= '%1'").arg(Iban);
    query.prepare(queryString);
    query.exec();
    query.next();
    return query;
}
