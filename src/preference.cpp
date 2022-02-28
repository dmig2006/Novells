#include "preference.h"
#include "ui_preference.h"

Preference::Preference(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Preference)
{
    ui -> setupUi(this);
    initialPreference();
}

Preference::~Preference()
{
    delete ui;
}

void Preference::initialPreference()
{
    initialVariablePreference();
    initialPushButtonPreference();
    initialFramePreference();
    initialLabelPreference();
}

void Preference::hidingPreference()
{

}

void Preference::showingPreference()
{

}

void Preference::initialVariablePreference()
{
    flagPreference.flagSkip = false;
    flagPreference.flagBeginSkip = false;
}

void Preference::initialBackgroundPreference()
{

}

void Preference::on_backButton_clicked()
{
    emit backMenuPreference();
}

void Preference::on_saveButton_clicked()
{

}

void Preference::on_loadButton_clicked()
{

}

void Preference::on_exitButton_clicked()
{
    emit newExit();
}

void Preference::on_preferenceButton_clicked()
{

}

void Preference::on_homeButton_clicked()
{

}

void Preference::initialPushButtonPreference()
{
    struct PIXMAP_PREFERENCE
    {
        QPixmap pixmapBack;
        QPixmap pixmapSave;
        QPixmap pixmapLoad;
        QPixmap pixmapExit;
        QPixmap pixmapPreference;
        QPixmap pixmapHome;
    };
    PIXMAP_PREFERENCE pxPreference;

    pxPreference.pixmapBack = QPixmap(":/new/Elements/image/elements/Preference/back_hover.png");
    pxPreference.pixmapSave = QPixmap(":/new/Elements/image/elements/Preference/save_p_hover.png");
    pxPreference.pixmapLoad = QPixmap(":/new/Elements/image/elements/Preference/load_p_hover.png");
    pxPreference.pixmapExit = QPixmap(":/new/Elements/image/elements/Preference/exit_hover.png");
    pxPreference.pixmapPreference = QPixmap(":/new/Elements/image/elements/Preference/options_selected_idle.png");
    pxPreference.pixmapHome = QPixmap(":/new/Elements/image/elements/Preference/home_hover.png");

    ui -> backButton -> setMask(pxPreference.pixmapBack.mask());
    ui -> saveButton -> setMask(pxPreference.pixmapSave.mask());
    ui -> loadButton -> setMask(pxPreference.pixmapLoad.mask());
    ui -> exitButton -> setMask(pxPreference.pixmapExit.mask());
    ui -> preferenceButton -> setMask(pxPreference.pixmapPreference.mask());
    ui -> homeButton -> setMask(pxPreference.pixmapHome.mask());

    ui -> saveButton -> setDisabled(true);
    ui -> homeButton -> setDisabled(true);

    ui -> backButton -> setGeometry(SCREENWIDTH-85, SCREENHEIGHT-300, 73, 54);
    ui -> saveButton -> setGeometry(SCREENWIDTH-100, SCREENHEIGHT-235, 86, 51);
    ui -> loadButton -> setGeometry(SCREENWIDTH-100, SCREENHEIGHT-170, 86, 51);
    ui -> exitButton -> setGeometry(SCREENWIDTH-110, SCREENHEIGHT-105, 90, 100);
    ui -> preferenceButton -> setGeometry(SCREENWIDTH-165, SCREENHEIGHT-90, 44, 70);
    ui -> homeButton -> setGeometry(SCREENWIDTH-245, SCREENHEIGHT-90, 68, 68);

    ui -> windowButton -> setGeometry(10, 25, 240, 50);
    ui -> fullscreenButton -> setGeometry(10, 80, 240, 50);
    ui -> windowButton -> setEnabled(false);
    ui -> fullscreenButton -> setEnabled(true);
//    ui -> windowButton -> setStyleSheet(WINDOWBUTTONCLICKED);
//    ui -> fullscreenButton -> setStyleSheet(FULLSCREENBUTTONNOCLICKED);

    ui -> allButton -> setGeometry(10, 25, 240, 50);
    ui -> notButton -> setGeometry(10, 80, 240, 50);
    ui -> allButton -> setEnabled(false);
    ui -> notButton -> setEnabled(true);
//    ui -> allButton -> setStyleSheet(ALLBUTTONNOCLICKED);
//    ui -> notButton -> setStyleSheet(NOTBUTTONONCLICKED);

    ui -> readMessageButton -> setGeometry(10, 25, 240, 50);
    ui -> allMessageButton -> setGeometry(10, 80, 240, 50);
    ui -> readMessageButton -> setEnabled(false);
    ui -> allMessageButton -> setEnabled(true);
//    ui -> readMessageButton ->setStyleSheet(READMESSAGEBUTTONONCLICKED);
//    ui -> allMessageButton -> setStyleSheet(ALLMESSAGEBUTTONNOCLICKED);

    ui -> beginSkipButton -> setGeometry(10, 10, 240, 50);
    ui -> beginSkipButton -> setEnabled(false);

    ui -> stopSkipButton -> setGeometry(10,25,240,50);
    ui -> continueSkipButton -> setGeometry(10, 80, 240, 50);
    ui -> stopSkipButton -> setEnabled(true);
    ui -> continueSkipButton ->setEnabled(false);
}

void Preference::initialFramePreference()
{
    ui -> displayFrame -> setGeometry(10, 10, 260, 140);
    ui -> jumpFrame -> setGeometry(10, 170, 260, 140);
    ui -> skipFrame -> setGeometry(290, 10, 260, 140);
    ui -> beginSkipFrame -> setGeometry(290, 170, 260, 70);
    ui -> afterSelectFrame -> setGeometry(290, 260, 260, 140);
}

void Preference::initialLabelPreference()
{
    ui -> titleDisplayLabel -> setGeometry(10, 0, 260, 20);
    ui -> titleDisplayLabel -> setAlignment(Qt::AlignCenter);

    ui -> titleJumpLabel -> setGeometry(10, 0, 260, 20);
    ui -> titleJumpLabel -> setAlignment(Qt::AlignCenter);

    ui -> titleSkipLabel -> setGeometry(10, 0, 260, 20);
    ui -> titleSkipLabel -> setAlignment(Qt::AlignCenter);

    ui -> afterSelectLabel -> setGeometry(10, 0, 260, 20);
    ui -> afterSelectLabel -> setAlignment(Qt::AlignCenter);
}



void Preference::on_fullscreenButton_clicked()
{
    ui -> fullscreenButton -> setEnabled(false);
    ui -> windowButton -> setEnabled(true);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
}

void Preference::on_windowButton_clicked()
{
    ui -> fullscreenButton -> setEnabled(true);
    ui -> windowButton -> setEnabled(false);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
/*    ui -> windowButton -> setStyleSheet(WINDOWBUTTONCLICKED);
    ui -> fullscreenButton -> setStyleSheet(FULLSCREENBUTTONNOCLICKED);
    flagPreference.flagDisplay = false;
*/
}

void Preference::on_allButton_clicked()
{
    ui -> allButton -> setEnabled(false);
    ui -> notButton -> setEnabled(true);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
/*
    ui -> allButton -> setStyleSheet(ALLBUTTONONCLICKED);
    ui -> notButton -> setStyleSheet(NOTBUTTONNOCLICKED);
*/
}


void Preference::on_notButton_clicked()
{
    ui -> allButton -> setEnabled(true);
    ui -> notButton -> setEnabled(false);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
/*
    ui -> allButton -> setStyleSheet(ALLBUTTONNOCLICKED);
    ui -> notButton -> setStyleSheet(NOTBUTTONONCLICKED);
*/
}

void Preference::on_readMessageButton_clicked()
{
    ui -> readMessageButton -> setEnabled(false);
    ui -> allMessageButton -> setEnabled(true);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
/*
    ui -> readMessageButton ->setStyleSheet(READMESSAGEBUTTONONCLICKED);
    ui -> allMessageButton -> setStyleSheet(ALLMESSAGEBUTTONNOCLICKED);
*/
}

void Preference::on_allMessageButton_clicked()
{
    ui -> readMessageButton -> setEnabled(true);
    ui -> allMessageButton -> setEnabled(false);
    if (flagPreference.flagSkip)
        ui ->beginSkipButton -> setEnabled(true);
    else
        ui -> beginSkipButton -> setEnabled(false);
/*
    ui -> readMessageButton ->setStyleSheet(READMESSAGEBUTTONNOCLICKED);
    ui -> allMessageButton -> setStyleSheet(ALLMESSAGEBUTTONONCLICKED);
    ui -> beginSkipButton -> setDisabled(false);
*/
}

void Preference::on_beginSkipButton_clicked()
{

}

void Preference::on_stopSkipButton_clicked()
{
    ui -> stopSkipButton -> setEnabled(false);
    ui -> continueSkipButton ->setEnabled(true);
}

void Preference::on_continueSkipButton_clicked()
{
    ui -> stopSkipButton -> setEnabled(true);
    ui -> continueSkipButton ->setEnabled(false);
}
