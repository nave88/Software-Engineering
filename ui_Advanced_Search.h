/********************************************************************************
** Form generated from reading UI file 'Advanced_Search.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_SEARCH_H
#define UI_ADVANCED_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Advanced_Search
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QCalendarWidget *calendarWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Advanced_Search)
    {
        if (Advanced_Search->objectName().isEmpty())
            Advanced_Search->setObjectName(QString::fromUtf8("Advanced_Search"));
        Advanced_Search->resize(912, 646);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Advanced_Search->sizePolicy().hasHeightForWidth());
        Advanced_Search->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Stock-Prophet.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Advanced_Search->setWindowIcon(icon);
        formLayout = new QFormLayout(Advanced_Search);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        label = new QLabel(Advanced_Search);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout);

        plainTextEdit = new QPlainTextEdit(Advanced_Search);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_4->addWidget(plainTextEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Advanced_Search);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        calendarWidget = new QCalendarWidget(Advanced_Search);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout_2->addWidget(calendarWidget);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(Advanced_Search);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        calendarWidget_2 = new QCalendarWidget(Advanced_Search);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));

        verticalLayout_3->addWidget(calendarWidget_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(Advanced_Search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label_4 = new QLabel(Advanced_Search);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_4);

        tableWidget = new QTableWidget(Advanced_Search);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, tableWidget);


        retranslateUi(Advanced_Search);

        QMetaObject::connectSlotsByName(Advanced_Search);
    } // setupUi

    void retranslateUi(QDialog *Advanced_Search)
    {
        Advanced_Search->setWindowTitle(QApplication::translate("Advanced_Search", "Advanced Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Advanced_Search", "Enter ticker symbols one per line", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Advanced_Search", "Start date", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Advanced_Search", "End date", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Advanced_Search", "Search", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Advanced_Search: public Ui_Advanced_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_SEARCH_H
