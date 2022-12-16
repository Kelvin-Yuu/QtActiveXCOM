#include "ActiveQt_Server.h"

#include <ActiveQt/QAxFactory>

ActiveQtServer::ActiveQtServer(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    connect(&SignalCenter::Instance(), SIGNAL(out_rec(QString)), this, SLOT(RecSlot(QString)));
    connect(ui.SendBtn, &QPushButton::clicked, this, &ActiveQtServer::onSendBtnClicked);
}

ActiveQtServer::~ActiveQtServer()
{
    qDebug() << "ÒÑ¹Ø±ÕActiveServer";
}

void ActiveQtServer::closeEvent(QCloseEvent* event)
{
    
    for each (OutputHelper * object in OutputHelper::objectList)
    {
        emit object->isclose();
    }
    emit this->isclose();
    //event->accept();
}

void ActiveQtServer::onSendBtnClicked()
{
    QString msg = ui.SendMsgEdit->toPlainText();
    for each (OutputHelper * object in OutputHelper::objectList)
    {
        emit object->sendToClient(msg);
    }
}

void ActiveQtServer::RecSlot(QString msg)
{
    ui.RecvMsgEdit->appendPlainText(msg);
    ui.SendMsgEdit->toPlainText() = msg;
}
