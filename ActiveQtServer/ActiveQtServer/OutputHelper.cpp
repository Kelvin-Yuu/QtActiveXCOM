#include "OutputHelper.h"

OutputHelper::OutputHelper(QObject *parent)
	: QObject(parent)
{
	OutputHelper::objectList.append(this);

	connect(this, SIGNAL(ReceiveFromClient_SC(QString)), &SignalCenter::Instance(), SIGNAL(out_rec(QString)));
}

OutputHelper::~OutputHelper()
{
	OutputHelper::objectList.removeOne(this);
}

void OutputHelper::ReceiveFromClient(QString msg)
{
	qDebug() << "Receive From Client" << msg;
	emit ReceiveFromClient_SC(msg);
}
