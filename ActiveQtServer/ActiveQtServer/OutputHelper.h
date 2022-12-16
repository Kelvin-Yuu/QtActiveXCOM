#pragma once

#include <QObject>
#include <QAxbindable>
#include <QDebug>

#include "SignalCenter.h"

class OutputHelper  : public QObject, public QAxBindable
{
	Q_OBJECT
	Q_CLASSINFO("ClassID", "{cd36361d-a1ba-4b83-8ad4-d485ef796ad6}")
	Q_CLASSINFO("InterfaceID", "{FB298DC5-6AE0-4E86-92C8-DF06105797B4}")
	Q_CLASSINFO("EventsID", "{37FB2D8B-F98F-4352-8E69-251FBB87AA4F}")
	Q_CLASSINFO("RegisterObject", "yes")

public:
	OutputHelper(QObject *parent = nullptr);
	~OutputHelper();

	static QList<OutputHelper*> objectList;

public slots:
	void ReceiveFromClient(QString);

signals:
	void sendToClient(QString msg);
	void isclose();
	void ReceiveFromClient_SC(QString msg);
};
