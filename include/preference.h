#ifndef PREFERENCE_H
#define PREFERENCE_H

#include <QWidget>

#include "headernovella.h"
#include "preferencecss.h"

struct FLAG_PREFERENCE
{
    bool flagSkip;
    bool flagBeginSkip;
};

namespace Ui {
class Preference;
}

class Preference : public QWidget
{
    Q_OBJECT

public:
    explicit Preference(QWidget *parent = 0);
    ~Preference();

private slots:
    void on_backButton_clicked();
    void on_saveButton_clicked();
    void on_loadButton_clicked();
    void on_exitButton_clicked();
    void on_preferenceButton_clicked();
    void on_homeButton_clicked();

    void on_fullscreenButton_clicked();
    void on_windowButton_clicked();
    void on_allButton_clicked();
    void on_notButton_clicked();

    void on_readMessageButton_clicked();

    void on_allMessageButton_clicked();

    void on_beginSkipButton_clicked();

    void on_stopSkipButton_clicked();

    void on_continueSkipButton_clicked();

private:
    void initialPushButtonPreference();
    void initialFramePreference();
    void initialLabelPreference();

    void initialPreference();
    void hidingPreference();
    void showingPreference();
    void initialVariablePreference();
    void initialBackgroundPreference();


    Ui::Preference *ui;
    FLAG_PREFERENCE flagPreference;

signals:
    void backMenuPreference();
    void newExit();
};

#endif // PREFERENCE_H
