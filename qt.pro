#-------------------------------------------------
#
# Project created by QtCreator 2016-01-13T19:51:55
#
#-------------------------------------------------

QT       += core gui widgets
qtHaveModule(printsupport): QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    messagelist.cpp \
    message.cpp

HEADERS  += mainwindow.h \
    messagelist.h \
    message.h

#FORMS    += mainwindow.ui \
#    messagewindow.ui
