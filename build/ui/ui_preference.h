/********************************************************************************
** Form generated from reading UI file 'preference.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCE_H
#define UI_PREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preference
{
public:
    QPushButton *loadButton;
    QPushButton *homeButton;
    QPushButton *saveButton;
    QPushButton *preferenceButton;
    QPushButton *backButton;
    QPushButton *exitButton;
    QFrame *displayFrame;
    QPushButton *windowButton;
    QPushButton *fullscreenButton;
    QLabel *titleDisplayLabel;
    QFrame *jumpFrame;
    QPushButton *allButton;
    QPushButton *notButton;
    QLabel *titleJumpLabel;
    QFrame *skipFrame;
    QPushButton *readMessageButton;
    QPushButton *allMessageButton;
    QLabel *titleSkipLabel;
    QFrame *beginSkipFrame;
    QPushButton *beginSkipButton;
    QFrame *afterSelectFrame;
    QPushButton *stopSkipButton;
    QPushButton *continueSkipButton;
    QLabel *afterSelectLabel;
    QScrollBar *horizontalScrollBar;

    void setupUi(QWidget *Preference)
    {
        if (Preference->objectName().isEmpty())
            Preference->setObjectName(QStringLiteral("Preference"));
        Preference->resize(800, 600);
        loadButton = new QPushButton(Preference);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(560, 180, 91, 51));
        homeButton = new QPushButton(Preference);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setGeometry(QRect(690, 180, 91, 51));
        saveButton = new QPushButton(Preference);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(560, 100, 91, 51));
        preferenceButton = new QPushButton(Preference);
        preferenceButton->setObjectName(QStringLiteral("preferenceButton"));
        preferenceButton->setGeometry(QRect(690, 100, 91, 51));
        backButton = new QPushButton(Preference);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(560, 20, 90, 50));
        exitButton = new QPushButton(Preference);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(690, 20, 91, 51));
        displayFrame = new QFrame(Preference);
        displayFrame->setObjectName(QStringLiteral("displayFrame"));
        displayFrame->setGeometry(QRect(10, 10, 111, 131));
        displayFrame->setFrameShape(QFrame::StyledPanel);
        displayFrame->setFrameShadow(QFrame::Raised);
        windowButton = new QPushButton(displayFrame);
        windowButton->setObjectName(QStringLiteral("windowButton"));
        windowButton->setGeometry(QRect(20, 40, 80, 22));
        fullscreenButton = new QPushButton(displayFrame);
        fullscreenButton->setObjectName(QStringLiteral("fullscreenButton"));
        fullscreenButton->setGeometry(QRect(20, 80, 80, 22));
        titleDisplayLabel = new QLabel(displayFrame);
        titleDisplayLabel->setObjectName(QStringLiteral("titleDisplayLabel"));
        titleDisplayLabel->setGeometry(QRect(30, 10, 59, 14));
        jumpFrame = new QFrame(Preference);
        jumpFrame->setObjectName(QStringLiteral("jumpFrame"));
        jumpFrame->setGeometry(QRect(150, 10, 111, 131));
        jumpFrame->setFrameShape(QFrame::StyledPanel);
        jumpFrame->setFrameShadow(QFrame::Raised);
        allButton = new QPushButton(jumpFrame);
        allButton->setObjectName(QStringLiteral("allButton"));
        allButton->setGeometry(QRect(20, 40, 80, 22));
        notButton = new QPushButton(jumpFrame);
        notButton->setObjectName(QStringLiteral("notButton"));
        notButton->setGeometry(QRect(20, 80, 80, 22));
        titleJumpLabel = new QLabel(jumpFrame);
        titleJumpLabel->setObjectName(QStringLiteral("titleJumpLabel"));
        titleJumpLabel->setGeometry(QRect(30, 10, 59, 14));
        skipFrame = new QFrame(Preference);
        skipFrame->setObjectName(QStringLiteral("skipFrame"));
        skipFrame->setGeometry(QRect(10, 170, 111, 131));
        skipFrame->setFrameShape(QFrame::StyledPanel);
        skipFrame->setFrameShadow(QFrame::Raised);
        readMessageButton = new QPushButton(skipFrame);
        readMessageButton->setObjectName(QStringLiteral("readMessageButton"));
        readMessageButton->setGeometry(QRect(20, 40, 80, 22));
        allMessageButton = new QPushButton(skipFrame);
        allMessageButton->setObjectName(QStringLiteral("allMessageButton"));
        allMessageButton->setGeometry(QRect(20, 80, 80, 22));
        titleSkipLabel = new QLabel(skipFrame);
        titleSkipLabel->setObjectName(QStringLiteral("titleSkipLabel"));
        titleSkipLabel->setGeometry(QRect(30, 10, 59, 14));
        beginSkipFrame = new QFrame(Preference);
        beginSkipFrame->setObjectName(QStringLiteral("beginSkipFrame"));
        beginSkipFrame->setGeometry(QRect(150, 170, 111, 41));
        beginSkipFrame->setFrameShape(QFrame::StyledPanel);
        beginSkipFrame->setFrameShadow(QFrame::Raised);
        beginSkipButton = new QPushButton(beginSkipFrame);
        beginSkipButton->setObjectName(QStringLiteral("beginSkipButton"));
        beginSkipButton->setGeometry(QRect(20, 10, 80, 22));
        afterSelectFrame = new QFrame(Preference);
        afterSelectFrame->setObjectName(QStringLiteral("afterSelectFrame"));
        afterSelectFrame->setGeometry(QRect(150, 230, 111, 131));
        afterSelectFrame->setFrameShape(QFrame::StyledPanel);
        afterSelectFrame->setFrameShadow(QFrame::Raised);
        stopSkipButton = new QPushButton(afterSelectFrame);
        stopSkipButton->setObjectName(QStringLiteral("stopSkipButton"));
        stopSkipButton->setGeometry(QRect(20, 40, 80, 22));
        continueSkipButton = new QPushButton(afterSelectFrame);
        continueSkipButton->setObjectName(QStringLiteral("continueSkipButton"));
        continueSkipButton->setGeometry(QRect(20, 80, 80, 22));
        afterSelectLabel = new QLabel(afterSelectFrame);
        afterSelectLabel->setObjectName(QStringLiteral("afterSelectLabel"));
        afterSelectLabel->setGeometry(QRect(10, 7, 91, 20));
        horizontalScrollBar = new QScrollBar(Preference);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(50, 440, 160, 16));
        horizontalScrollBar->setStyleSheet(QLatin1String("Preference QScrollBar#horizontalScrollBar\n"
"{\n"
"  background-color: red;\n"
"  width: 15px;\n"
"  margin: 0px;\n"
"  border: none;\n"
"}"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        retranslateUi(Preference);

        QMetaObject::connectSlotsByName(Preference);
    } // setupUi

    void retranslateUi(QWidget *Preference)
    {
        Preference->setWindowTitle(QApplication::translate("Preference", "Form", 0));
        loadButton->setText(QString());
        homeButton->setText(QString());
        saveButton->setText(QString());
        preferenceButton->setText(QString());
        backButton->setText(QString());
        exitButton->setText(QString());
        windowButton->setText(QString());
        fullscreenButton->setText(QString());
        titleDisplayLabel->setText(QApplication::translate("Preference", "\320\255\320\272\321\200\320\260\320\275", 0));
        allButton->setText(QString());
        notButton->setText(QString());
        titleJumpLabel->setText(QApplication::translate("Preference", "\320\237\320\265\321\200\320\265\321\205\320\276\320\264", 0));
        readMessageButton->setText(QString());
        allMessageButton->setText(QString());
        titleSkipLabel->setText(QApplication::translate("Preference", "\320\237\321\200\320\276\320\277\321\203\321\201\320\272", 0));
        beginSkipButton->setText(QString());
        stopSkipButton->setText(QString());
        continueSkipButton->setText(QString());
        afterSelectLabel->setText(QApplication::translate("Preference", "\320\237\320\276\321\201\320\273\320\265 \320\262\321\213\320\261\320\276\321\200\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Preference: public Ui_Preference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCE_H
