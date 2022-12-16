/********************************************************************************
** Form generated from reading UI file 'ActiveQtServer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVEQTSERVER_H
#define UI_ACTIVEQTSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActiveQtServerClass
{
public:
    QPlainTextEdit *RecvMsgEdit;
    QTextEdit *SendMsgEdit;
    QPushButton *SendBtn;
    QLabel *label;

    void setupUi(QWidget *ActiveQtServerClass)
    {
        if (ActiveQtServerClass->objectName().isEmpty())
            ActiveQtServerClass->setObjectName(QString::fromUtf8("ActiveQtServerClass"));
        ActiveQtServerClass->resize(481, 364);
        RecvMsgEdit = new QPlainTextEdit(ActiveQtServerClass);
        RecvMsgEdit->setObjectName(QString::fromUtf8("RecvMsgEdit"));
        RecvMsgEdit->setGeometry(QRect(20, 10, 291, 291));
        SendMsgEdit = new QTextEdit(ActiveQtServerClass);
        SendMsgEdit->setObjectName(QString::fromUtf8("SendMsgEdit"));
        SendMsgEdit->setGeometry(QRect(20, 310, 291, 31));
        SendBtn = new QPushButton(ActiveQtServerClass);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setGeometry(QRect(340, 310, 81, 31));
        label = new QLabel(ActiveQtServerClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 10, 81, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(ActiveQtServerClass);

        QMetaObject::connectSlotsByName(ActiveQtServerClass);
    } // setupUi

    void retranslateUi(QWidget *ActiveQtServerClass)
    {
        ActiveQtServerClass->setWindowTitle(QCoreApplication::translate("ActiveQtServerClass", "ActiveQtServer", nullptr));
        SendBtn->setText(QCoreApplication::translate("ActiveQtServerClass", "send", nullptr));
        label->setText(QCoreApplication::translate("ActiveQtServerClass", "Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActiveQtServerClass: public Ui_ActiveQtServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVEQTSERVER_H
