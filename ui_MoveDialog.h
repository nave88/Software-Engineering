/********************************************************************************
** Form generated from reading UI file 'MoveDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEDIALOG_H
#define UI_MOVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MoveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCalendarWidget *calendarWidget;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MoveDialog)
    {
        if (MoveDialog->objectName().isEmpty())
            MoveDialog->setObjectName(QString::fromUtf8("MoveDialog"));
        MoveDialog->resize(376, 343);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Stock-Prophet.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MoveDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MoveDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MoveDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        calendarWidget = new QCalendarWidget(MoveDialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);

        label_2 = new QLabel(MoveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(MoveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MoveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MoveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MoveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MoveDialog);
    } // setupUi

    void retranslateUi(QDialog *MoveDialog)
    {
        MoveDialog->setWindowTitle(QApplication::translate("MoveDialog", "Move multiple days", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MoveDialog", "Enter date to move to.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MoveDialog", "Note that this will delete and not execute the current order.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MoveDialog: public Ui_MoveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEDIALOG_H
