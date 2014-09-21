/********************************************************************************
** Form generated from reading UI file 'throughput.ui'
**
** Created: Thu Jul 24 09:24:43 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THROUGHPUT_H
#define UI_THROUGHPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThroughPut
{
public:

    void setupUi(QWidget *ThroughPut)
    {
        if (ThroughPut->objectName().isEmpty())
            ThroughPut->setObjectName(QString::fromUtf8("ThroughPut"));
        ThroughPut->resize(400, 300);

        retranslateUi(ThroughPut);

        QMetaObject::connectSlotsByName(ThroughPut);
    } // setupUi

    void retranslateUi(QWidget *ThroughPut)
    {
        ThroughPut->setWindowTitle(QApplication::translate("ThroughPut", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThroughPut: public Ui_ThroughPut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THROUGHPUT_H
