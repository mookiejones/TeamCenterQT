#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T02:11:16
#
#-------------------------------------------------

QT       += core gui
qtHaveModule(printsupport): QT += printsupport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    messagewidget.cpp \
    messagelistmodel.cpp \
    messageentry.cpp \
    messagelist.cpp \
    message.cpp

HEADERS  += mainwindow.h \
    messagewidget.h \
    messagelistmodel.h \
    messageentry.h \
    messagelist.h \
    message.h
