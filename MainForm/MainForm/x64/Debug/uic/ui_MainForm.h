/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFormClass
{
public:
    QWidget *centralWidget;
    QTextEdit *SendMsgEdit;
    QPlainTextEdit *RecvMsgEdit;
    QPushButton *SendBtn;
    QLabel *label;
    QPushButton *OpenBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainFormClass)
    {
        if (MainFormClass->objectName().isEmpty())
            MainFormClass->setObjectName(QString::fromUtf8("MainFormClass"));
        MainFormClass->resize(600, 400);
        centralWidget = new QWidget(MainFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SendMsgEdit = new QTextEdit(centralWidget);
        SendMsgEdit->setObjectName(QString::fromUtf8("SendMsgEdit"));
        SendMsgEdit->setGeometry(QRect(60, 300, 421, 31));
        RecvMsgEdit = new QPlainTextEdit(centralWidget);
        RecvMsgEdit->setObjectName(QString::fromUtf8("RecvMsgEdit"));
        RecvMsgEdit->setGeometry(QRect(60, 20, 421, 251));
        RecvMsgEdit->setReadOnly(true);
        SendBtn = new QPushButton(centralWidget);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setGeometry(QRect(500, 300, 81, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 30, 54, 12));
        OpenBtn = new QPushButton(centralWidget);
        OpenBtn->setObjectName(QString::fromUtf8("OpenBtn"));
        OpenBtn->setGeometry(QRect(500, 150, 91, 31));
        MainFormClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainFormClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        MainFormClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainFormClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainFormClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainFormClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainFormClass->setStatusBar(statusBar);

        retranslateUi(MainFormClass);

        QMetaObject::connectSlotsByName(MainFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFormClass)
    {
        MainFormClass->setWindowTitle(QCoreApplication::translate("MainFormClass", "MainForm", nullptr));
        SendBtn->setText(QCoreApplication::translate("MainFormClass", "send", nullptr));
        label->setText(QCoreApplication::translate("MainFormClass", "Client", nullptr));
        OpenBtn->setText(QCoreApplication::translate("MainFormClass", "Open Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainFormClass: public Ui_MainFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
