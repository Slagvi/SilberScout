#include "SilberScout.h"

SilberScout::SilberScout(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setMenuState();
}


void SilberScout::setMenuState()
{
	menuWidget = new MenuSilber(nullptr);
	setCentralWidget(menuWidget);
	connect(menuWidget, &MenuSilber::startGame, this, &SilberScout::setControlState);
}


void SilberScout::setControlState()
{
	controlWidget = new ControlSilber(nullptr);
	setCentralWidget(controlWidget);
	connect(controlWidget, &ControlSilber::gameAbandoned, this, &SilberScout::setMenuState);
}