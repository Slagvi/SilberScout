#pragma once

#include <QWidget>
#include <QVector2D>
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

	void keyPressEvent(QKeyEvent *event) override;
	void keyReleaseEvent(QKeyEvent *event) override;

	void abandonPressed();
	OperationUi *opUi;

	QVector2D dir;

signals:
	void gameAbandoned();
};
