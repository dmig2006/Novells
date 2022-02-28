/********************************************************************************
** Form generated from reading UI file 'comport.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPORT_H
#define UI_COMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ComPort
{
public:

    void setupUi(QDialog *ComPort)
    {
        if (ComPort->objectName().isEmpty())
            ComPort->setObjectName(QStringLiteral("ComPort"));
        ComPort->resize(400, 300);

        retranslateUi(ComPort);

        QMetaObject::connectSlotsByName(ComPort);
    } // setupUi

    void retranslateUi(QDialog *ComPort)
    {
        ComPort->setWindowTitle(QApplication::translate("ComPort", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ComPort: public Ui_ComPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPORT_H
