/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *preferenceButton;
    QPushButton *achievmentButton;
    QPushButton *galleryButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *exitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(170, 200, 90, 50));
        preferenceButton = new QPushButton(centralWidget);
        preferenceButton->setObjectName(QStringLiteral("preferenceButton"));
        preferenceButton->setGeometry(QRect(110, 280, 91, 51));
        achievmentButton = new QPushButton(centralWidget);
        achievmentButton->setObjectName(QStringLiteral("achievmentButton"));
        achievmentButton->setGeometry(QRect(170, 50, 91, 51));
        galleryButton = new QPushButton(centralWidget);
        galleryButton->setObjectName(QStringLiteral("galleryButton"));
        galleryButton->setGeometry(QRect(50, 120, 91, 51));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(50, 50, 91, 51));
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(50, 200, 91, 51));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(170, 120, 91, 51));
        MainWindow->setCentralWidget(centralWidget);
        preferenceButton->raise();
        achievmentButton->raise();
        galleryButton->raise();
        saveButton->raise();
        loadButton->raise();
        exitButton->raise();
        startButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\234\320\276\321\217 \320\235\320\276\320\262\320\265\320\273\320\273\320\260", 0));
        startButton->setText(QString());
        preferenceButton->setText(QString());
        achievmentButton->setText(QString());
        galleryButton->setText(QString());
        saveButton->setText(QString());
        loadButton->setText(QString());
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
