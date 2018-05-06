#include "SilberScout.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SilberScout w;
	w.show();
	return a.exec();
}
