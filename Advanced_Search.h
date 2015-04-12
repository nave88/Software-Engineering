#ifndef ADVANCED_SEARCH_H
#define ADVANCED_SEARCH_H

#include <QDialog>
#include <QDate>
#include <QString>
#include "ui_Advanced_Search.h"

class Advanced_Search : public QDialog
{
	Q_OBJECT
	
	public:
		Advanced_Search(QWidget *parent = 0);
		Advanced_Search(QDate, QWidget *parent = 0);
		QDate today;
		
	private:
		Ui::Advanced_Search ui;
	
	private slots:
		void fillTable();
};


#endif
