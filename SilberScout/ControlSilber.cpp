#include "ControlSilber.h"
#include <QKeyEvent>

ControlSilber::ControlSilber(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	opUi = new OperationUi(ui.graphicsView);
	grabKeyboard();
	
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


void ControlSilber::keyPressEvent(QKeyEvent *event)
{
	QVector2D last = dir;
	switch(event->key()) {
	case Qt::Key_Up:
		dir.setY(1);
		break;
	case Qt::Key_Down:
		dir.setY(-1);
		break;
	case Qt::Key_Right:
		dir.setX(1);
		break;
	case Qt::Key_Left:
		dir.setX(-1);
		break;
	}
	if (last != dir) {
		opUi->setDirection(dir);
		return;
	}

	return QWidget::keyPressEvent(event);
}


void ControlSilber::keyReleaseEvent(QKeyEvent *event)
{
	QVector2D last = dir;
	switch (event->key()) {
	case Qt::Key_Up:
		dir.setY(0);
		break;
	case Qt::Key_Down:
		dir.setY(0);
		break;
	case Qt::Key_Right:
		dir.setX(0);
		break;
	case Qt::Key_Left:
		dir.setX(0);
		break;
	}
	if (last != dir) {
		opUi->setDirection(dir);
		return;
	}

	return QWidget::keyPressEvent(event);
}