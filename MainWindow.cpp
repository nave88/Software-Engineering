#include "MainWindow.h"
#include "headers.h"
#include <string> 
using std::string;
#include <sstream> 
using std::ostringstream;
#include <QStringList>
#include <iostream>
using std::cout;
#include <map>
using std::map;
#include <QList>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <iterator>
#include <QDialog>
#include "SelectStartingDate.h"
#include <QMessageBox>
#include "Advanced_Search.h"
#include "MoveDialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	SelectStartingDate ssd(this);
	
	ui.setupUi(this);
	abort=true;
	
	selectstartingdate:
	if(ssd.exec() == QDialog::Accepted)
	{
		today = ssd.date;
		
		QDate lastDay = QDate::currentDate().addDays(-1);
		while(!isValidTradingDay(lastDay)) lastDay = lastDay.addDays(-1);
		if(today > lastDay)
		{
			QMessageBox::critical(this, "Error", "The simulator has no data for the future");
			goto selectstartingdate;
		}
		
		bool error;
		int qty = ssd.balance.toInt(&error, 10);
		if(error==false || qty<0) 
		{
			QMessageBox::critical(this, "Error", "Please enter a valid starting balance");
			goto selectstartingdate;
		}
		
		portfolio = new Portfolio(ssd.balance.toStdString());
	}
	else
		return;
	
	abort=false;	
	
	while(!isValidTradingDay(today)) today = today.addDays(1);
	ui.lineEdit_12->setText(QString::fromStdString(portfolio->getCash().toString()));
	ui.lineEdit_13->setText(QString::fromStdString(Money(0).toString()));
	ui.lineEdit_14->setText(QString::fromStdString(portfolio->getCash().toString()));
	
	ui.dateEdit_2->setDate(today);

	ui.tableWidget->insertColumn(0);
	ui.tableWidget->insertColumn(1);
	ui.tableWidget->insertColumn(2);
	
	QStringList labels;
	labels << "Stock" <<"Quantity" <<"Value per stock";
	ui.tableWidget->setHorizontalHeaderLabels(labels);
	
	ui.tableWidget_2->insertColumn(0);
	ui.tableWidget_2->insertColumn(1);
	ui.tableWidget_2->insertColumn(2);
	ui.tableWidget_2->insertColumn(3);
	
	QStringList labels2;
	labels2 << "Stock" <<"Quantity" <<"Type" << "Value per stock";
	ui.tableWidget_2->setHorizontalHeaderLabels(labels2);
	
	ui.calendarWidget_2->setSelectedDate(today);
	
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(setSearchPrice()));
	connect(ui.pushButton_9, SIGNAL(clicked()), this, SLOT(resetSearchDate()));
	connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(buyOrder()));
	connect(ui.pushButton_8, SIGNAL(clicked()), this, SLOT(sellOrder()));
	connect(ui.tableWidget_2, SIGNAL(cellClicked(int, int)), this, SLOT(highlightOrderRow(int, int)));
	connect(ui.pushButton_12, SIGNAL(clicked()), this, SLOT(deleteOrders()));
	connect(ui.pushButton_10, SIGNAL(clicked()), this, SLOT(executeOrder()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(advancedSearch()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(moveDate()));
	
	connect(ui.pushButton_7, SIGNAL(clicked()), ui.lineEdit_15, SLOT(clear()));
	connect(ui.pushButton_7, SIGNAL(clicked()), ui.lineEdit_16, SLOT(clear()));
	connect(ui.pushButton_8, SIGNAL(clicked()), ui.lineEdit_18, SLOT(clear()));
	connect(ui.pushButton_8, SIGNAL(clicked()), ui.lineEdit_19, SLOT(clear()));
	
}

void MainWindow::setSearchPrice()
{
	QString tickerSymbol = ui.lineEdit_21->text();
	QDate date = ui.dateEdit_2->date();
	
	if(date > today)
	{
		QMessageBox::critical(this, "Error", "Cannot search for date in future");
		resetSearchDate();
		return;
	}
	
	
	Money price = getPrice(tickerSymbol.toStdString(), date);
	
	if(!isValidTradingDay(date))
	{
		QMessageBox::critical(this, "Error", "Not a trading day");
		return;
	}
	
	if(price == Money(1307530948100548704L))
	{
		QMessageBox::critical(this, "Error", "No such ticker symbol");
		return;
	}
	
	long cents = price.getCents();
	
	ostringstream result;
	
	long centPart = cents % 100;
	long dollarPart = cents/100;
	result << dollarPart;
	if(centPart != 0) 
	{
		result << "." << centPart/10 << centPart % 10;
	}
	
	ui.lineEdit_22->setText(QString::fromStdString(result.str()));
}

void MainWindow::resetSearchDate()
{
	QDate today = ui.calendarWidget_2->selectedDate();
	ui.dateEdit_2->setDate(today);
}

void MainWindow::buyOrder()
{
	
	QString tickerSymbol = ui.lineEdit_15->text();
	QString qtyString = ui.lineEdit_16->text();
	
	bool error;
	int qty = qtyString.toInt(&error, 10);
	if(error==false || qty<=0) return;
	
	Money price = getPrice(tickerSymbol.toStdString(), today);
	if(price == Money(1307530948100548704L))
	{
		QMessageBox::critical(this, "Error", "No such ticker symbol");
		return;
	}
	
	currOrder.changeQty(Stock(tickerSymbol.toStdString()), qty);
	
	printOrderSlip();
}

void MainWindow::sellOrder()
{
	QString tickerSymbol = ui.lineEdit_18->text();
	QString qtyString = ui.lineEdit_19->text();
	
	bool error;
	int qty = qtyString.toInt(&error, 10);
	if(error==false || qty<=0) return;
	
	Money price = getPrice(tickerSymbol.toStdString(), today);
	if(price == Money(1307530948100548704L))
	{
		QMessageBox::critical(this, "Error", "No such ticker symbol");
		return;
	}
	
	/*int totalQty;
	if(currOrder.orderTicket.count(Stock(tickerSymbol.toStdString()))==1)
	{
		totalQty = currOrder.orderTicket.at(Stock(tickerSymbol.toStdString()));
		totalQty -= qty;
	}
	else totalQty = -qty;
	
	totalQty *= -1;*/
	
	if(qty > portfolio->numStocksOwned(Stock(tickerSymbol.toStdString()))) 
	{
		QMessageBox::critical(this, "Not enough stocks to sell", "Not enough stocks to sell");
		return;
	}
	
	currOrder.changeQty(Stock(tickerSymbol.toStdString()), -qty);
	
	printOrderSlip();
}

void MainWindow::printOrderSlip()
{
	for(int i=ui.tableWidget_2->rowCount()-1; i>=0; --i)
	{
		ui.tableWidget_2->removeRow(i);
	}
	
	
	map<Stock,int>::iterator iter = currOrder.orderTicket.begin();
	for(map<Stock,int>::size_type i=0; i<currOrder.size(); ++i, ++iter)
	{
		ui.tableWidget_2->insertRow(i);
		
		QTableWidgetItem *stockName = new QTableWidgetItem(QString::fromStdString((iter->first).getTickerSymbol()));
		stockName->setFlags(stockName->flags() & (~Qt::ItemIsEditable));
		ui.tableWidget_2->setItem(i,0, stockName); //stock
		
		QTableWidgetItem *qty;
		QTableWidgetItem *type;
		
		if(iter->second>0)
		{
			type = new QTableWidgetItem(QString("buy"));
			 qty = new QTableWidgetItem(QString::number(iter->second));
		}
		else
		{
			type = new QTableWidgetItem(QString("sell"));
			qty = new QTableWidgetItem(QString::number(-1*iter->second));
		}
		
		qty->setFlags(qty->flags() & (~Qt::ItemIsEditable));
		type->setFlags(type->flags() & (~Qt::ItemIsEditable));
		
		ui.tableWidget_2->setItem(i,1, qty);
		ui.tableWidget_2->setItem(i,2, type);
		
		QTableWidgetItem *stockPrice = new QTableWidgetItem(QString::fromStdString(getPrice(iter->first, today).toString()));
		ui.tableWidget_2->setItem(i,3, stockPrice);
	}
	
	Money buyTotal(0);
	Money sellTotal(0);
	
	iter = currOrder.orderTicket.begin();
	for(map<Stock,int>::size_type i=0; i<currOrder.size(); ++i, ++iter)
	{
		if(iter->second > 0)
		{
			buyTotal += getPrice(iter->first, today) * iter->second;
		}
		else
		{
			sellTotal += getPrice(iter->first, today) * (-iter->second);
		}
	}
		
	ui.lineEdit_4->setText(QString::fromStdString(buyTotal.toString()));
	ui.lineEdit_5->setText(QString::fromStdString(sellTotal.toString()));
	ui.lineEdit_6->setText(QString::fromStdString((buyTotal-sellTotal).toString()));
}

void MainWindow::highlightOrderRow(int row, int col)
{
	ui.tableWidget_2->selectRow(row);
}

bool deleteOrdersCompFunction(const QModelIndex &i1, const QModelIndex &i2)
{
	return i1.row() >i2.row();
}

void MainWindow::deleteOrders()
{
	QItemSelectionModel *select = ui.tableWidget_2->selectionModel();
	
	QModelIndexList rowList = select->selectedRows(); // return selected row(s)
	//qSort(rowList.begin(), rowList.end(), deleteOrdersCompFunction);
	
	for(QModelIndexList::iterator it = rowList.begin(); it != rowList.end(); ++it)
	{
		QTableWidgetItem * item = ui.tableWidget_2->item(it->row(), 0);
		QString s = item->text();
		currOrder.orderTicket.erase(Stock(s.toStdString()));
		
		//cout <<s.toStdString() <<" " <<it->row() <<endl;
		
		//ui.tableWidget_2->removeRow(it->row());
	}
	printOrderSlip();
	
	cout <<endl;
}

void MainWindow::printPortfolio()
{
	for(int i=ui.tableWidget->rowCount()-1; i>=0; --i)
	{
		ui.tableWidget->removeRow(i);
	}
	
	
	map<Stock,unsigned>::iterator iter = portfolio->holdings.begin();
	for(map<Stock,unsigned>::size_type i=0; i<portfolio->holdings.size(); ++i, ++iter)
	{
		ui.tableWidget->insertRow(i);
		
		QTableWidgetItem *stockName = new QTableWidgetItem(QString::fromStdString((iter->first).getTickerSymbol()));
		stockName->setFlags(stockName->flags() & (~Qt::ItemIsEditable));
		ui.tableWidget->setItem(i,0, stockName); //stock
		
		QTableWidgetItem *qty = new QTableWidgetItem(QString::number(iter->second));
		qty->setFlags(qty->flags() & (~Qt::ItemIsEditable));
		
		ui.tableWidget->setItem(i,1, qty); //qty
		
		QTableWidgetItem *stockPrice = new QTableWidgetItem(QString::fromStdString(getPrice(iter->first, today).toString()));
		ui.tableWidget->setItem(i,2, stockPrice);
	}
	
	ui.lineEdit_12->setText(QString::fromStdString(portfolio->getCash().toString()));
	
	Money valueOfStocks=0;
	map<Stock,unsigned>::iterator stockIter;
	
	for(stockIter = portfolio->holdings.begin(); stockIter != portfolio->holdings.end(); ++stockIter)
	{
		Money priceOfStock = getPrice(stockIter->first, today);
		valueOfStocks += (priceOfStock * (long)stockIter->second);
	}
	
	ui.lineEdit_13->setText(QString::fromStdString(valueOfStocks.toString()));
	
	Money totalNetAssets = valueOfStocks + portfolio->getCash();
	
	ui.lineEdit_14->setText(QString::fromStdString(totalNetAssets.toString()));
	
}

void MainWindow::executeOrder()
{
	QDate lastDay = QDate::currentDate().addDays(-1);
	while(!isValidTradingDay(lastDay)) lastDay = lastDay.addDays(-1);
	if(today == lastDay)
	{
		QMessageBox::critical(this, "End of simulation", "Come back after close of next trading day");
		return;
	}
	
	if(currOrder.executeOrder(portfolio, today)==false)
	{
		QMessageBox::critical(this, "Cannot execute order", "Not enough money");
		return;
	}
	
	printOrderSlip();
	today = today.addDays(1);
	while(!isValidTradingDay(today)) today = today.addDays(1);
	ui.calendarWidget_2->setSelectedDate(today);
	ui.dateEdit_2->setDate(today);
	printPortfolio();
}

void MainWindow::advancedSearch()
{
	Advanced_Search as(today, this);
	as.exec();
}

void MainWindow::moveDate()
{
	MoveDialog md(today, this);
	QDate date;
	
	tryAgain:
	if(md.exec() == QDialog::Accepted)
	{
		date = md.date;
		if(date<=today)
		{
			QMessageBox::critical(this, "Error", "Date must be in future");
			goto tryAgain;
		}
		
		QDate lastDay = QDate::currentDate().addDays(-1);
		while(!isValidTradingDay(lastDay)) lastDay = lastDay.addDays(-1);
		if(date >= lastDay)
		{
			QMessageBox::critical(this, "Error", "Date must lie between simulated today and today's real date");
			goto tryAgain;
		}
		
		if(!isValidTradingDay(date))
		{
			QMessageBox::critical(this, "Error", "Not a trading day");
			goto tryAgain;
		}
		
	}
	else
		return;
	
	today = date;
	while(!isValidTradingDay(today)) today = today.addDays(1);
	ui.dateEdit_2->setDate(today);
	ui.calendarWidget_2->setSelectedDate(today);
	currOrder.clear();
	printPortfolio();
	printOrderSlip();
}

bool MainWindow::isValidTradingDay(QDate d)
{
	if(d.dayOfWeek()>=6 || (getPrice(Stock("XOM"), d) == Money(1307530948100548704L))) return false;
	else return true;
}
