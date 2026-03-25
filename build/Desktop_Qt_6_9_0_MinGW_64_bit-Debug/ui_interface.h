/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterFace
{
public:
    QWidget *centralwidget;
    QLabel *balance_label;
    QLabel *Iban_label;
    QLabel *name_surname_label;
    QLabel *receiver_name_label;
    QTableView *tableView;
    QPushButton *exit_pushButton;
    QPushButton *send_pushButton;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *Iban_lineEdit;
    QLineEdit *amount_lineEdit;

    void setupUi(QMainWindow *InterFace)
    {
        if (InterFace->objectName().isEmpty())
            InterFace->setObjectName("InterFace");
        InterFace->resize(535, 425);
        InterFace->setMinimumSize(QSize(535, 425));
        InterFace->setMaximumSize(QSize(535, 425));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bank_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        InterFace->setWindowIcon(icon);
        InterFace->setStyleSheet(QString::fromUtf8("centralwidget {border-image: url(:/images/interface_background.jpg);}"));
        centralwidget = new QWidget(InterFace);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {border-image: url(:/images/interface_background3.jpg);}"));
        balance_label = new QLabel(centralwidget);
        balance_label->setObjectName("balance_label");
        balance_label->setGeometry(QRect(407, 31, 91, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(false);
        font.setKerning(false);
        balance_label->setFont(font);
        balance_label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        balance_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Iban_label = new QLabel(centralwidget);
        Iban_label->setObjectName("Iban_label");
        Iban_label->setGeometry(QRect(28, 31, 211, 16));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        Iban_label->setFont(font1);
        Iban_label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        name_surname_label = new QLabel(centralwidget);
        name_surname_label->setObjectName("name_surname_label");
        name_surname_label->setGeometry(QRect(28, 55, 211, 16));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        name_surname_label->setFont(font2);
        name_surname_label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        receiver_name_label = new QLabel(centralwidget);
        receiver_name_label->setObjectName("receiver_name_label");
        receiver_name_label->setGeometry(QRect(330, 170, 171, 20));
        QFont font3;
        font3.setPointSize(14);
        font3.setItalic(true);
        receiver_name_label->setFont(font3);
        receiver_name_label->setLayoutDirection(Qt::LeftToRight);
        receiver_name_label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        receiver_name_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 220, 475, 140));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border-radius: 4px;"));
        tableView->verticalHeader()->setVisible(false);
        exit_pushButton = new QPushButton(centralwidget);
        exit_pushButton->setObjectName("exit_pushButton");
        exit_pushButton->setGeometry(QRect(399, 370, 107, 22));
        QFont font4;
        font4.setBold(true);
        exit_pushButton->setFont(font4);
        exit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(91,133,213,180);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"QPushButton::hover{\n"
"background-color: rgba(101,153,223,200);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"background-color: rgba(121,173,243,220);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}"));
        send_pushButton = new QPushButton(centralwidget);
        send_pushButton->setObjectName("send_pushButton");
        send_pushButton->setEnabled(false);
        send_pushButton->setGeometry(QRect(397, 140, 107, 22));
        send_pushButton->setFont(font4);
        send_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(91,133,213,180);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"QPushButton::hover{\n"
"background-color: rgba(101,153,223,200);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"background-color: rgba(121,173,243,220);\n"
"border-radius: 4px;\n"
"color: rgba(255, 255, 255, 200);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 142, 81, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 114, 41, 16));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 200);"));
        Iban_lineEdit = new QLineEdit(centralwidget);
        Iban_lineEdit->setObjectName("Iban_lineEdit");
        Iban_lineEdit->setGeometry(QRect(113, 112, 391, 22));
        Iban_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border-radius: 4px;"));
        amount_lineEdit = new QLineEdit(centralwidget);
        amount_lineEdit->setObjectName("amount_lineEdit");
        amount_lineEdit->setEnabled(false);
        amount_lineEdit->setGeometry(QRect(113, 140, 121, 22));
        amount_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border-radius: 4px;"));
        InterFace->setCentralWidget(centralwidget);

        retranslateUi(InterFace);

        QMetaObject::connectSlotsByName(InterFace);
    } // setupUi

    void retranslateUi(QMainWindow *InterFace)
    {
        InterFace->setWindowTitle(QCoreApplication::translate("InterFace", "Banking Automation", nullptr));
        balance_label->setText(QString());
        Iban_label->setText(QString());
        name_surname_label->setText(QString());
        receiver_name_label->setText(QString());
        exit_pushButton->setText(QCoreApplication::translate("InterFace", "Exit", nullptr));
        send_pushButton->setText(QCoreApplication::translate("InterFace", "Send", nullptr));
        label_2->setText(QCoreApplication::translate("InterFace", "Amount", nullptr));
        label->setText(QCoreApplication::translate("InterFace", "Iban ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterFace: public Ui_InterFace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
