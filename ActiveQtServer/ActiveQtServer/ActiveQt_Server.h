#pragma once

#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include <ActiveQt/QAxBindable>
#include <QDebug>
#include "OutputHelper.h"
#include "ui_ActiveQtServer.h"

class ActiveQtServer : public QWidget, public QAxBindable
{
    Q_OBJECT

public:
    ActiveQtServer(QWidget *parent = nullptr);

    ~ActiveQtServer();

    virtual void closeEvent(QCloseEvent* event) override;

private slots:
    void onSendBtnClicked();
    void RecSlot(QString msg);

signals:
    void isclose();

private:
    Ui::ActiveQtServerClass ui;
};
