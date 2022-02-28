#-------------------------------------------------
#
# Project created by QtCreator 2016-09-06T13:59:55
#
#-------------------------------------------------

QT       += core gui
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = game
TEMPLATE = app

DESTDIR      =  ./bin
VPATH       +=  ./gui ./include ./src ./resources
INCLUDEPATH +=  ./include
MOC_DIR     +=  ./build/moc
OBJECTS_DIR +=  ./build/objects
UI_DIR      +=  ./build/ui
RCC_DIR     +=  ./build/res
LIBS        +=  -lpthread

SOURCES += main.cpp\
        mainwindow.cpp \
        preference.cpp



HEADERS += headernovella.h \
        mainwindow.h \
        preference.h \
    include/preferencecss.h




FORMS   += mainwindow.ui \
        preference.ui

RESOURCES += res.qrc


