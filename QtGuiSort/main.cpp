#include "QtGuiSort.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiSort w;
	w.show();
	return a.exec();
}
