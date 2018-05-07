#include "OperationUi.h"
#include "ResourceMgr.h"
#include <QGraphicsPixmapItem>

OperationUi::OperationUi(QGraphicsView *v) : view(v), scene(new QGraphicsScene())
{
	view->setScene(scene);
	initDisplayElements();
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
	
	scene->addItem(droidItem);
	droidItem->setPos(300, 500);
	view->centerOn(droidItem);
}
