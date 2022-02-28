/********************************************************************************
** Form generated from reading UI file 'tablebase.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEBASE_H
#define UI_TABLEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TableBase
{
public:

    void setupUi(QDialog *TableBase)
    {
        if (TableBase->objectName().isEmpty())
            TableBase->setObjectName(QStringLiteral("TableBase"));
        TableBase->resize(400, 300);

        retranslateUi(TableBase);

        QMetaObject::connectSlotsByName(TableBase);
    } // setupUi

    void retranslateUi(QDialog *TableBase)
    {
        TableBase->setWindowTitle(QApplication::translate("TableBase", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class TableBase: public Ui_TableBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEBASE_H
