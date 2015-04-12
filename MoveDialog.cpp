#include "MoveDialog.h"
#include <Qt>
#include <QDate>

MoveDialog::MoveDialog(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(setDate()));
}

MoveDialog::MoveDialog(QDate today, QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	ui.calendarWidget->setSelectedDate(today);
	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(setDate()));
}

void MoveDialog::setDate()
{
	date = ui.calendarWidget->selectedDate();
}
