/********************************************************************************
** Form generated from reading UI file 'SelectStartingDate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSTARTINGDATE_H
#define UI_SELECTSTARTINGDATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectStartingDate
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectStartingDate)
    {
        if (SelectStartingDate->objectName().isEmpty())
            SelectStartingDate->setObjectName(QString::fromUtf8("SelectStartingDate"));
        SelectStartingDate->resize(381, 292);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Stock-Prophet.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SelectStartingDate->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SelectStartingDate);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SelectStartingDate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        calendarWidget = new QCalendarWidget(SelectStartingDate);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(SelectStartingDate);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(SelectStartingDate);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SelectStartingDate);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SelectStartingDate);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectStartingDate, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectStartingDate, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectStartingDate);
    } // setupUi

    void retranslateUi(QDialog *SelectStartingDate)
    {
        SelectStartingDate->setWindowTitle(QApplication::translate("SelectStartingDate", "Start", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SelectStartingDate", "Enter starting date for simulation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SelectStartingDate", "Enter balance", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectStartingDate: public Ui_SelectStartingDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSTARTINGDATE_H
