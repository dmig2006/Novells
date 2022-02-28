#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "headernovella.h"
#include "preference.h"

namespace Ui {
class MainWindow;
}

struct DIALOGE
{
    int number;
    QString name;
    QString strTxt;
};



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void initialMain();
    void hidingMain();
    void showingMain();
    void initialVariableMain();

    void initialBackgroundMain(int pNumber);
    void initialTextEditMain(QTextEdit *pTextEdit, int x, int pY, QString pText);
    void initialPushButtonMain();
    void initialStyleMain();

    Ui::MainWindow *ui;

    QTextEdit *text;
    DIALOGE personage;
    Preference *mPreference;

    QBrush *brush;
    QPalette *palette;

    float xDisplay, yDisplay;


protected:

private slots:
    void on_startButton_clicked();
    void on_preferenceButton_clicked();
    void on_achievmentButton_clicked();
    void on_galleryButton_clicked();
    void on_saveButton_clicked();
    void on_loadButton_clicked();
    void on_exitButton_clicked();

    void backMenuMain();
};

#endif // MAINWINDOW_H
