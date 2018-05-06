#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SilberScout.h"
#include "MenuSilber.h"
#include "ControlSilber.h"

class SilberScout : public QMainWindow
{
	Q_OBJECT

public:
	SilberScout(QWidget *parent = Q_NULLPTR);

private:
	Ui::SilberScoutClass ui;
	MenuSilber *menuWidget;
	ControlSilber *controlWidget;

	void setMenuState();
	void setControlState();
};
