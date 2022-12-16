#include "MainForm.h"

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);



	//ui.RecvMsgEdit->appendPlainText(interfaces);
	connect(ui.OpenBtn, &QPushButton::clicked, this, &MainForm::OpenServerExe);

}

MainForm::~MainForm()
{
	delete process;
	if (pAxWidget != nullptr)
	{
		delete pAxWidget;

	}
}

void MainForm::startAxWidget()
{
	//time->stop();
	pAxWidget = new QAxWidget();
	pAxWidget->setControl("ActiveQtServer.OutputHelper.1");

	//获取接口文档
	QString interfaces = pAxWidget->generateDocumentation();
	QFile docs("AX_Interfaces.html");
	docs.open(QIODevice::ReadWrite | QIODevice::Text);
	QTextStream TS(&docs);
	TS << interfaces << endl;
	connect(ui.SendBtn, &QPushButton::clicked, this, &MainForm::onSendBtnClicked, Qt::UniqueConnection);
	connect(pAxWidget, SIGNAL(sendToClient(QString)), this, SLOT(receive_slot(QString)), Qt::UniqueConnection);
	//connect(pAxWidget, SIGNAL(isclose()), this, SLOT(closeAxWidget()));
}

void MainForm::closeAxWidget()
{
	ui.SendBtn->setVisible(false);
	delete pAxWidget;
	pAxWidget = nullptr;
	qDebug() << "delete pAxWidget";
}

void MainForm::onSendBtnClicked()
{
	QVariant params = ui.SendMsgEdit->toPlainText();
	qDebug() << "向Server发送消息：" << params;
	pAxWidget->dynamicCall("ReceiveFromClient(QString)", params);
}

void MainForm::receive_slot(QString msg)
{
	this->ui.RecvMsgEdit->appendPlainText("Receive Signal:" + msg);
}

void MainForm::OpenServerExe()
{
	process = new QProcess();

	connect(process, static_cast<void(QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished),
		[=]() 
		{
			ui.SendBtn->setVisible(false);
			delete pAxWidget;
			pAxWidget = nullptr;
			qDebug() << "delete pAxWidget";
		});

	process->start("D:/_code/_Test/QtActiveCom/ActiveQtServer/x64/Debug/ActiveQtServer.exe");
	process->waitForStarted();


	time = new QTimer();
	time->setSingleShot(true);
	time->setInterval(100);
	connect(time, &QTimer::timeout, this, &MainForm::startAxWidget);

	time->start();

	//startAxWidget();



}
