#include "MenuSilber.h"
#include "qmessagebox.h"
#include <QtDebug>

MenuSilber::MenuSilber(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.StartBtn, &QPushButton::clicked, this, &MenuSilber::startPressed);
}


MenuSilber::~MenuSilber()
{
}


void MenuSilber::startPressed()
{
	emit startGame();
}