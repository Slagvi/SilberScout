#pragma once

#include <QWidget>
#include "ui_ControlSilber.h"

class ControlSilber : public QWidget
{
	Q_OBJECT

public:
	ControlSilber(QWidget *parent = Q_NULLPTR);
	~ControlSilber();

private:
	Ui::ControlSilber ui;

	void abandonPressed();

signals:
	void gameAbandoned();
};
