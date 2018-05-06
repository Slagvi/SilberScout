#pragma once

#include <QWidget>
#include "ui_MenuSilber.h"

class MenuSilber : public QWidget
{
	Q_OBJECT

public:
	MenuSilber(QWidget *parent = Q_NULLPTR);
	~MenuSilber();

private:
	Ui::MenuSilber ui;

	void startPressed();

signals:
	void startGame();
};
