#pragma once

#include <QString>
#include <QImage>

class ResourceMgr
{
public:
	static const int MAX_IMAGES = 4;
	enum class ImageID : unsigned int {
		MAP_BACKGROUND = 0,
		MAP_GRID = 1,
		MAP_FOW = 2,
		MAP_DROID = 3,
		MAX = MAX_IMAGES,
	};

	static ResourceMgr& getInstance();
	QImage *getImage(ImageID);

	ResourceMgr(ResourceMgr const&) = delete;
	void operator=(ResourceMgr const&) = delete;

private:
	ResourceMgr();
	~ResourceMgr();

	void loadImages();

	QString imagePaths[MAX_IMAGES];
	QImage *imgs[MAX_IMAGES];
};

