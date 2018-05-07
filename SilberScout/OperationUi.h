#pragma once

#include <QGraphicsView>
#include <QGraphicsScene>


class OperationUi
{
public:
	OperationUi(QGraphicsView *v);
	~OperationUi();

private:
	void initDisplayElements();

	QGraphicsPixmapItem *backItem;
	QGraphicsPixmapItem *gridItem;
	QGraphicsPixmapItem *fowItem;
	QGraphicsPixmapItem *droidItem;

	QGraphicsView *view;
	QGraphicsScene *scene;
};

