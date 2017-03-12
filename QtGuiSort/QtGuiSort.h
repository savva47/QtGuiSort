#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiSort.h"

class QtGuiSort : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiSort(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiSortClass ui;
};
