#include "SelectStartingDate.h"
#include <Qt>

SelectStartingDate::SelectStartingDate(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(setDate()));
	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(setBalance()));
}

void SelectStartingDate::setDate()
{
	date = ui.calendarWidget->selectedDate();
}

void SelectStartingDate::setBalance()
{
	balance = ui.lineEdit->text();
}

