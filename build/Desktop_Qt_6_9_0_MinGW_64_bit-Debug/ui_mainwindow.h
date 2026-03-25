/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *github_button;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *customer_identity_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *login_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(310, 460);
        MainWindow->setMinimumSize(QSize(310, 460));
        MainWindow->setMaximumSize(QSize(310, 460));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bank_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image: url(:/images/dark_blur_wallpaper.jpg);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 26, 310, 171));
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/dollar_design.png);"));
        github_button = new QPushButton(centralwidget);
        github_button->setObjectName("github_button");
        github_button->setGeometry(QRect(260, 395, 30, 30));
        github_button->setMinimumSize(QSize(30, 30));
        github_button->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("PMingLiU-ExtB")});
        font.setPointSize(15);
        github_button->setFont(font);
        github_button->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/github.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(255, 390, 41, 40));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-radius: 8px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(245, 430, 61, 20));
        QFont font1;
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255,255,180);"));
        customer_identity_lineEdit = new QLineEdit(centralwidget);
        customer_identity_lineEdit->setObjectName("customer_identity_lineEdit");
        customer_identity_lineEdit->setGeometry(QRect(55, 200, 200, 40));
        customer_identity_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border:none;\n"
"border-radius: 8px;"));
        customer_identity_lineEdit->setAlignment(Qt::AlignCenter);
        password_lineEdit = new QLineEdit(centralwidget);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(55, 260, 200, 40));
        password_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border:none;\n"
"border-radius: 8px;"));
        password_lineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_lineEdit->setAlignment(Qt::AlignCenter);
        login_button = new QPushButton(centralwidget);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(55, 320, 200, 40));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        login_button->setFont(font2);
        login_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0,161,233,255), stop:1 rgba(0,4,37,255));\n"
"border:none;\n"
"border-radius: 8px;\n"
"color: white;\n"
"}\n"
"QPushButton::hover {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0,181,253,255), stop:1 rgba(20,24,57,255));\n"
"border:none;\n"
"border-radius: 8px;\n"
"color: white;\n"
"}\n"
"QPushButton::pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0,191,255,255), stop:1 rgba(30,34,67,255));\n"
"border:none;\n"
"border-radius: 8px;\n"
"color: white;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        customer_identity_lineEdit->raise();
        password_lineEdit->raise();
        login_button->raise();
        label_2->raise();
        label->raise();
        github_button->raise();
        label_3->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Banking Automation", nullptr));
        label->setText(QString());
        github_button->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Follow Me!", nullptr));
        customer_identity_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Identity", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
