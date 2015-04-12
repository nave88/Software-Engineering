#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QMainWindow>
#include "ui_MainWindow.h"
#include <QString>
#include "headers.h"
#include "Order.h"

class MainWindow : public QMainWindow
{
	
	Q_OBJECT
	
	public:
	
		//attributes
		Portfolio *portfolio;
		Order currOrder;
		QDate today;
		
		bool abort;
		
		//constructor
		MainWindow(QWidget *parent = 0);
	
	private:
		Ui::MainWindow ui;
		void printOrderSlip();
		void printPortfolio();
		bool isValidTradingDay(QDate);
		
	public slots:
	
	void setSearchPrice();
	void resetSearchDate();
	void buyOrder();
	void sellOrder();
	void highlightOrderRow(int,int);
	void deleteOrders();
	void executeOrder();
	void advancedSearch();
	void moveDate();
	
	signals:
};


#endif
