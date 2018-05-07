#include "ResourceMgr.h"


ResourceMgr& ResourceMgr::getInstance()
{
	static ResourceMgr instance;
	return instance;
}


ResourceMgr::ResourceMgr() : imagePaths{
	"../data/Map_Background.png",
	"../data/Map_Grid.png",
	"../data/Map_FOW.png",
	"../data/Map_Droid.png" ,
}
{
	loadImages();
}


ResourceMgr::~ResourceMgr()
{
}


void ResourceMgr::loadImages()
{
	for (int i = 0; i < MAX_IMAGES; ++i) {
		imgs[i] = new QImage(imagePaths[i]);

		if (!imgs[i]) {
			qDebug("Image load Failed %s", imagePaths[i]);
		}
	}
	qDebug("Images loading finished");
}


QImage *ResourceMgr::getImage(ImageID id)
{
	return imgs[(int)id];
}