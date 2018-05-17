#include "OperationUi.h"
#include "ResourceMgr.h"
#include <QGraphicsPixmapItem>
#include <QVector3D>
#include <QtMath>

OperationUi::OperationUi(QGraphicsView *v) : view(v), scene(new QGraphicsScene()), fpsTimer(this), moveDir(0, 0)
{
	view->setScene(scene);
	initDisplayElements();

	connect(&fpsTimer, &QTimer::timeout, this, &OperationUi::updateGameplay);
	fpsTimer.start(34); // 30fps
}


OperationUi::~OperationUi()
{
	delete scene;
}


void OperationUi::initDisplayElements()
{
	QImage *tmpImg = ResourceMgr::getInstance().getImage(ResourceMgr::ImageID::MAP_BACKGROUND);
	backItem = new QGraphicsPixmapItem(QPixmap::fromImage(*tmpImg));
	scene->addItem(backItem);

	tmpImg = ResourceMgr::getInstance().getImage(ResourceMgr::ImageID::MAP_GRID);
	gridItem = new QGraphicsPixmapItem(QPixmap::fromImage(*tmpImg));
	scene->addItem(gridItem);

	//tmpImg = ResourceMgr::getInstance().getImage(ResourceMgr::ImageID::MAP_FOW);
	//fowItem = new QGraphicsPixmapItem(QPixmap::fromImage(*tmpImg));
	//scene->addItem(fowItem);

	tmpImg = ResourceMgr::getInstance().getImage(ResourceMgr::ImageID::MAP_DROID);
	droidItem = new QGraphicsPixmapItem(QPixmap::fromImage(*tmpImg));
	droidItem->setTransformOriginPoint(droidItem->boundingRect().width() / 2.0, droidItem->boundingRect().height() / 2.0);

	//droidItem->setTransformOriginPoint(100, 100);
	
	scene->addItem(droidItem);
	droidItem->setPos(300, 500);
	
}


void OperationUi::setDirection(QVector2D dir)
{
	moveDir = dir;
}


void OperationUi::updateGameplay() 
{
	if (moveDir.isNull())
		return;

	droidItem->setRotation(droidItem->rotation() + moveDir.x() * 5.0);
	qreal rot = qDegreesToRadians( droidItem->rotation());

	QVector2D move = QVector2D(0, moveDir.y()) * 3.0;
	move = QVector2D(qCos(rot) * move.x() - qSin(rot) * move.y(), qCos(rot) * move.y() + qSin(rot) * move.x());
	droidItem->moveBy(move.x(), move.y());

	view->centerOn(droidItem);
}