#include "ControlSilber.h"

ControlSilber::ControlSilber(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	connect(ui.abandonBtn, &QPushButton::clicked, this, &ControlSilber::abandonPressed);
}

ControlSilber::~ControlSilber()
{
}


void ControlSilber::abandonPressed()
{
	emit gameAbandoned();
}