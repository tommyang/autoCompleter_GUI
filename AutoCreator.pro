#-------------------------------------------------
#
# Project created by QtCreator 2016-01-26T17:02:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AutoCreator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wordlist.cpp \
    mylineedit.cpp

HEADERS  += mainwindow.h \
    wordlist.h \
    dictionaryConst.h \
    mylineedit.h

FORMS    += mainwindow.ui
CONFIG += c++11
