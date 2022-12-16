#pragma once

#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include <QAxObject>
#include <QDebug>
#include <QAxWidget>
#include <QProcess>
#include <QTimer>
#include <QSharedPointer>

#include "ui_MainForm.h"

class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();
private:
    QAxWidget* pAxWidget;
    QProcess* process;
    QTimer* time;
    void startAxWidget();
    

public slots:
    void onSendBtnClicked();
    void receive_slot(QString);
    void OpenServerExe();
    void closeAxWidget();

private:
    Ui::MainFormClass ui;
};
