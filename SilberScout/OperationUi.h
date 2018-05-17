#pragma once

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <QVector2D>


class OperationUi : public QObject
{
public:
	OperationUi(QGraphicsView *v);
	~OperationUi();

	void setDirection(QVector2D dir);

private:
	void initDisplayElements();
	void updateGameplay();

	QGraphicsPixmapItem *backItem;
	QGraphicsPixmapItem *gridItem;
	QGraphicsPixmapItem *fowItem;
	QGraphicsPixmapItem *droidItem;

	QGraphicsView *view;
	QGraphicsScene *scene;
	QTimer fpsTimer;
	QVector2D moveDir;
};

