// https://github.com/Enderceliik
// Ender CELIK

#include "mainwindow.h"
#include <QApplication>
#include "database.h"

int main(int argc, char *argv[])
{
    // For the username and passwords you can use;
    // for admin account:
    //    username: '1'
    //    password: '159*'
    // or
    //    username: '3'
    //    password: '654'
    // for definitions of other accounts: database.cpp -> initial_database_definition()

    // !! While using the transfer interface, if you enter the correct data and
    // progress through the lineEdits using the 'tab' key, the next lineEdit or
    // button will become active.
    // This functionality is in place to ensure the correct IBAN information and
    // a reasonable transfer amount are requested.

    // 先实例化 QApplication，
    QApplication a(argc, argv);

    // 如果没库会自动建，如果有库会自动连
    // 不需要在这里显式 new，可以在 MainWindow 内部去实例化
    database db;

    MainWindow w;
    w.show();
    return a.exec();
}
