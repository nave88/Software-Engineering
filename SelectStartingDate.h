#ifndef SELECT_STARTING_DATE_H
#define SELECT_STARTING_DATE_H

#include <QDialog>
#include <QDate>
#include <QString>
#include "ui_SelectStartingDate.h"

class SelectStartingDate : public QDialog
{
	Q_OBJECT
	
	public:
		SelectStartingDate(QWidget *parent = 0);
		QDate date;
		QString balance;
		
	private:
		Ui::SelectStartingDate ui;
	
	private slots:
		void setDate();
		void setBalance();
};


#endif
