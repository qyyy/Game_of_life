#-------------------------------------------------
#
# Project created by QtCreator 2017-06-03T11:35:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game_of_life_qt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cell_automat.cpp

HEADERS  += mainwindow.h \
    cell_automat.h

FORMS    += mainwindow.ui

DISTFILES +=

RESOURCES += \
    back_image.qrc
