/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionOpen_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLineEdit *lineEdit_12;
    QLabel *label_18;
    QLineEdit *lineEdit_13;
    QLabel *label_19;
    QLineEdit *lineEdit_14;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_30;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_12;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLabel *label_21;
    QLineEdit *lineEdit_15;
    QLabel *label_22;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout;
    QLabel *label_27;
    QLineEdit *lineEdit_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_28;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_29;
    QLineEdit *lineEdit_22;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout;
    QLabel *label_31;
    QCalendarWidget *calendarWidget_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(991, 868);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Stock-Prophet.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_11->addWidget(label_3);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_11->addWidget(tableWidget);


        verticalLayout_10->addLayout(verticalLayout_11);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_12, 0, 1, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 1, 0, 1, 1);

        lineEdit_13 = new QLineEdit(centralwidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_13, 1, 1, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 2, 0, 1, 1);

        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_14, 2, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_5);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 2, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_17->addWidget(label_30);

        tableWidget_2 = new QTableWidget(centralwidget);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_17->addWidget(tableWidget_2);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout_17->addWidget(pushButton_12);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);


        gridLayout_2->addLayout(horizontalLayout_9, 2, 0, 1, 1);


        verticalLayout_17->addLayout(gridLayout_2);


        verticalLayout_16->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));

        verticalLayout_16->addLayout(verticalLayout_18);


        gridLayout->addLayout(verticalLayout_16, 0, 1, 2, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 0, 2, 2, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_14 = new QVBoxLayout(groupBox_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_6->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_15 = new QLineEdit(groupBox_6);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        gridLayout_6->addWidget(lineEdit_15, 0, 1, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_6->addWidget(label_22, 1, 0, 1, 1);

        lineEdit_16 = new QLineEdit(groupBox_6);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        gridLayout_6->addWidget(lineEdit_16, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(groupBox_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_6->addWidget(pushButton_7, 2, 0, 1, 2);


        verticalLayout_14->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lineEdit_18 = new QLineEdit(groupBox_7);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        gridLayout_7->addWidget(lineEdit_18, 0, 1, 1, 1);

        lineEdit_19 = new QLineEdit(groupBox_7);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        gridLayout_7->addWidget(lineEdit_19, 1, 1, 1, 1);

        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_7->addWidget(label_25, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_7);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_7->addWidget(pushButton_8, 2, 0, 1, 2);


        verticalLayout_14->addWidget(groupBox_7);


        verticalLayout_13->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_19 = new QVBoxLayout(groupBox_8);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_27 = new QLabel(groupBox_8);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout->addWidget(label_27);

        lineEdit_21 = new QLineEdit(groupBox_8);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        horizontalLayout->addWidget(lineEdit_21);


        verticalLayout_19->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_28 = new QLabel(groupBox_8);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_2->addWidget(label_28);

        dateEdit_2 = new QDateEdit(groupBox_8);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit_2->sizePolicy().hasHeightForWidth());
        dateEdit_2->setSizePolicy(sizePolicy);
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit_2);

        pushButton_9 = new QPushButton(groupBox_8);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButton_9);


        verticalLayout_19->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_29 = new QLabel(groupBox_8);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_3->addWidget(label_29);

        lineEdit_22 = new QLineEdit(groupBox_8);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        horizontalLayout_3->addWidget(lineEdit_22);


        verticalLayout_19->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_19->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_19->addWidget(pushButton_2);


        verticalLayout_13->addWidget(groupBox_8);


        verticalLayout_2->addLayout(verticalLayout_13);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout->addWidget(label_31);

        calendarWidget_2 = new QCalendarWidget(centralwidget);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(calendarWidget_2->sizePolicy().hasHeightForWidth());
        calendarWidget_2->setSizePolicy(sizePolicy2);
        calendarWidget_2->setGridVisible(true);
        calendarWidget_2->setSelectionMode(QCalendarWidget::NoSelection);
        calendarWidget_2->setNavigationBarVisible(true);
        calendarWidget_2->setDateEditEnabled(false);

        verticalLayout->addWidget(calendarWidget_2);


        verticalLayout_15->addLayout(verticalLayout);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_15->addWidget(pushButton_3);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout_15->addWidget(pushButton_10);


        verticalLayout_2->addLayout(verticalLayout_15);


        gridLayout->addLayout(verticalLayout_2, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 991, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_2);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Stock Market Trading Simulator", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Portfolio", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Cash Balance", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Value of Portfolio", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Total Assets", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "Order slip", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "Delete Selected Orders", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Buy total", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Sell total", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Net total", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Order", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Buy", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Ticker Symbol", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Qty", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "Add to order slip", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Sell", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Ticker Symbol", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "Qty", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Add to order slip", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "Ticker Symbol", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "Date", 0, QApplication::UnicodeUTF8));
        dateEdit_2->setDisplayFormat(QApplication::translate("MainWindow", "M/d/yyyy", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "Reset to today", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "Price", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Advanced Search", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "Today's date", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Move multiple days dialog", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "Execute order and move to next trading day", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
