#pragma once

#include <QObject>
#include <QDebug>

class SignalCenter  : public QObject
{
	Q_OBJECT

public:
	SignalCenter(QObject *parent = nullptr);
	static SignalCenter& SignalCenter::Instance();
	~SignalCenter();
signals:
	void out_rec(QString);
};
