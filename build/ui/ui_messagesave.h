/********************************************************************************
** Form generated from reading UI file 'messagesave.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESAVE_H
#define UI_MESSAGESAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MessageSave
{
public:

    void setupUi(QDialog *MessageSave)
    {
        if (MessageSave->objectName().isEmpty())
            MessageSave->setObjectName(QStringLiteral("MessageSave"));
        MessageSave->resize(400, 300);

        retranslateUi(MessageSave);

        QMetaObject::connectSlotsByName(MessageSave);
    } // setupUi

    void retranslateUi(QDialog *MessageSave)
    {
        MessageSave->setWindowTitle(QApplication::translate("MessageSave", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageSave: public Ui_MessageSave {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESAVE_H
