#ifndef MOVE_DIALOG_H
#define MOVE_DIALOG_H

#include <QDialog>
#include <QDate>
#include <QString>
#include <QDate>
#include "ui_MoveDialog.h"

class MoveDialog : public QDialog
{
	Q_OBJECT
	
	public:
		MoveDialog(QWidget *parent = 0);
		MoveDialog(QDate, QWidget *parent = 0);
		QDate date;
		
	private:
		Ui::MoveDialog ui;
	
	private slots:
		void setDate();
};


#endif
