#include "ControlSilber.h"

ControlSilber::ControlSilber(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	opUi = new OperationUi(ui.graphicsView);
	
	connect(ui.abandonBtn, &QPushButton::clicked, this, &ControlSilber::abandonPressed);
}

ControlSilber::~ControlSilber()
{
	delete opUi;
}


void ControlSilber::abandonPressed()
{
	emit gameAbandoned();
}