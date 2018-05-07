#pragma once

#include <QWidget>
#include "ui_ControlSilber.h"
#include "OperationUi.h"

class ControlSilber : public QWidget
{
	Q_OBJECT

public:
	ControlSilber(QWidget *parent = Q_NULLPTR);
	~ControlSilber();

private:
	Ui::ControlSilber ui;

	void abandonPressed();
	OperationUi *opUi;

signals:
	void gameAbandoned();
};
