#include "Advanced_Search.h"
#include <Qt>
#include <QString>
#include <QStringList>
#include <iostream>
#include <string>
#include "headers.h"
#include <QApplication>
#include <QMessageBox>
using std::string;
using std::cout;
using std::endl;

bool isValidTradingDay(QDate d)
{
	if(d.dayOfWeek()>=6 || (getPrice(Stock("XOM"), d) == Money(1307530948100548704L))) return false;
	else return true;
}

Advanced_Search::Advanced_Search(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(fillTable()));
}

Advanced_Search::Advanced_Search(QDate d, QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);
	today = d;
	ui.calendarWidget->setSelectedDate(today);
	ui.calendarWidget_2->setSelectedDate(today);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(fillTable()));
}

void Advanced_Search::fillTable()
{	
	QDate start = ui.calendarWidget->selectedDate();
	QDate end = ui.calendarWidget_2->selectedDate();
	
	if(start>=QDate::currentDate() || end>=QDate::currentDate())
	{
		QMessageBox::critical(this, "Error", "Dates must be earlier than today's real date");
		return;
	}
	else if(start>today || end>today)
	{
		QMessageBox::critical(this, "Error", "Dates cannot go beyond today");
		return;
	}
	
	while(!isValidTradingDay(start)) start = start.addDays(1);
	
	ui.label_4->setText("Loading...");
	ui.label->repaint();
	ui.label->update();
	qApp->processEvents();
	
	for(int i=ui.tableWidget->rowCount()-1; i>=0; --i)
	{
		ui.tableWidget->removeRow(i);
	}
	
	for(int i=ui.tableWidget->columnCount()-1; i>=0; --i)
	{
		ui.tableWidget->removeColumn(i);
	}
	
	QString plainTextEditContents = ui.plainTextEdit->toPlainText();
	QStringList linesInitial = plainTextEditContents.split("\n");
	
	QStringList lines;
	for(QStringList::iterator iter = linesInitial.begin(); iter != linesInitial.end(); ++iter)
	{
		if(!(getPrice(Stock(iter->toStdString()), start) == Money(1307530948100548704L))) lines << *iter;
	}
	
	for(int i=0; i<lines.size(); ++i)
	{
		ui.tableWidget->insertColumn(i);
	}
	
	ui.tableWidget->setHorizontalHeaderLabels(lines);
	
	QStringList dates;
	unsigned count=0;
	
	while(start <= end)
	{
		ui.tableWidget->insertRow(count);
		dates << start.toString();
		
		unsigned colCount=0;
		for(QStringList::iterator iter = lines.begin(); iter != lines.end(); ++iter)
		{
			string stockName = iter->toStdString();
			string stockPrice = getPrice(Stock(stockName), start).toString();
			QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(stockPrice));
			item->setFlags(item->flags() & (~Qt::ItemIsEditable));
			ui.tableWidget->setItem(count,colCount++, item); //stock
		}
		
		start = start.addDays(1);
		++count;
		if(start<QDate::currentDate())
		{
			while(!isValidTradingDay(start)) start = start.addDays(1);
		}
	}
	
	ui.tableWidget->setVerticalHeaderLabels(dates);
	
	ui.label_4->setText("");
	ui.label->update();
}
