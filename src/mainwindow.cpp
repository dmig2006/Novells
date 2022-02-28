#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui -> setupUi(this);

    mPreference = new Preference();
    text = new QTextEdit(this);
    brush = new QBrush;
    palette = new QPalette;

    initialMain();
    hidingMain();
    showingMain();

    connect(mPreference, SIGNAL(newExit()), this, SLOT(on_exitButton_clicked()));
    connect(mPreference, SIGNAL(backMenuPreference()), this, SLOT(backMenuMain()));
}

MainWindow::~MainWindow()
{
    delete palette;
    delete brush;

    delete text;

    delete mPreference;

    delete ui;
}

void MainWindow::initialMain()
{
    initialVariableMain();
    initialStyleMain();

    this -> setGeometry(0,0,SCREENWIDTH,SCREENHEIGHT);

    QTime currenttime = QTime::currentTime();
    int hours = currenttime.hour();

    initialTextEditMain(text, 10,SCREENHEIGHT-100, "");
    initialPushButtonMain();
    initialBackgroundMain(hours);
}

void MainWindow::hidingMain()
{
    text -> hide();
    ui -> galleryButton -> hide();
    ui -> achievmentButton -> hide();
    ui -> saveButton -> hide();

    ui -> startButton -> hide();
    ui -> preferenceButton -> hide();
    ui -> exitButton -> hide();
    ui -> loadButton -> hide();
}

void MainWindow::showingMain()
{
    ui -> startButton -> show();
    ui -> preferenceButton -> show();
    ui -> exitButton -> show();
    ui -> loadButton -> show();
}

void MainWindow::initialVariableMain()
{
    xDisplay = 0.0f;
    yDisplay = 0.0f;
}

void MainWindow::initialBackgroundMain(int pNumber)
{
/*
    if (pNumber >= 6 and pNumber < 12)
       brush->setTextureImage(QImage(":/new/BackGround/image/background/morning.jpg"));
    else if (pNumber >= 12 and pNumber < 18)
       brush->setTextureImage(QImage(":/new/BackGround/image/background/day.jpg"));
    else if (pNumber >= 18 and pNumber < 24)
       brush->setTextureImage(QImage(":/new/BackGround/image/background/evening.jpg"));
    else if (pNumber >= 24 and pNumber < 6)
       brush->setTextureImage(QImage(":/new/BackGround/image/background/night.jpg"));
*/
    if (pNumber > 100)
        qDebug() << "777";

    brush -> setTextureImage(QImage(":/new/BackGround/image/background/bg.jpg"));

    palette -> setBrush(QPalette::Window, *brush);
    this -> setPalette(*palette);

}

void MainWindow::initialTextEditMain(QTextEdit *pTextEdit, int pX, int pY, QString pText)
{
    pTextEdit -> setGeometry(pX, pY, SCREENWIDTH-10-pX, SCREENHEIGHT-10-pY);
    pTextEdit -> setText(pText);
    ui -> centralWidget -> setFocus();
}

void MainWindow::initialPushButtonMain()
{
    struct PIXMAP_MAIN
    {
        QPixmap pixmapNewGame;
        QPixmap pixmapExit;
        QPixmap pixmapPreference;
        QPixmap pixmapLoad;
    };
    PIXMAP_MAIN pxMain;

    pxMain.pixmapNewGame = QPixmap(":/new/Elements/image/elements/Menu/new_game_hover.png");
    pxMain.pixmapExit = QPixmap(":/new/Elements/image/elements/Menu/exit_hover.png");
    pxMain.pixmapLoad = QPixmap(":/new/Elements/image/elements/Menu/load_hover.png");
    pxMain.pixmapPreference = QPixmap(":/new/Elements/image/elements/Menu/options_hover.png");

    ui -> startButton -> setMask(pxMain.pixmapNewGame.mask()); //Установка маски
    ui -> exitButton -> setMask(pxMain.pixmapExit.mask());
    ui -> preferenceButton -> setMask(pxMain.pixmapPreference.mask());
    ui -> loadButton -> setMask(pxMain.pixmapLoad.mask());

    ui -> startButton -> setGeometry(SCREENWIDTH-230, 40, 220, 250);
    ui -> exitButton -> setGeometry(SCREENWIDTH-100, SCREENHEIGHT-100, 90, 100);
    ui -> preferenceButton -> setGeometry(SCREENWIDTH-150, SCREENHEIGHT-90, 44, 70);
    ui -> loadButton -> setGeometry(SCREENWIDTH-231, SCREENHEIGHT-77, 71, 53);

}

void MainWindow::initialStyleMain()
{
    QString style;
    QFile fStyle(":/new/File/file/novel800x600.css");
    if (fStyle.open(QIODevice::ReadOnly))
    {
        style = fStyle.readAll();
        fStyle.close();
    }
    else
        qDebug() << "не открыт";
    qApp -> setStyleSheet(style);
}

void MainWindow::on_startButton_clicked()
{

}

void MainWindow::on_preferenceButton_clicked()
{
    mPreference -> setGeometry(0,25, SCREENWIDTH, SCREENHEIGHT);
    mPreference -> setWindowFlags(windowType()| Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint|Qt::Tool);
    mPreference -> setPalette(*palette);
    mPreference -> show();

}

void MainWindow::on_achievmentButton_clicked()
{

}

void MainWindow::on_galleryButton_clicked()
{

}

void MainWindow::on_saveButton_clicked()
{

}

void MainWindow::on_loadButton_clicked()
{

}

void MainWindow::on_exitButton_clicked()
{
    QApplication::exit(149);
}

void MainWindow::backMenuMain()
{
    mPreference -> hide();
    this -> show();

}
