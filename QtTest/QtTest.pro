#-------------------------------------------------
#
# Project created by QtCreator 2015-05-02T02:04:15
#
#-------------------------------------------------

QT       += core gui

QT      += gui-private
QT       += concurrent
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtTest
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    xing/IXingAPI.cpp \
    xing/xasession.cpp \
    tr/t8430.cpp \
    tr/TrQuery.cpp \
    xing/xaquery.cpp

HEADERS  += dialog.h \
    util/templatesingleton.h \
    xing/IXingAPI.h \
    xing/xasession.h \
    tr/t8430.h \
    tr/TrQuery.h \
    xing/xaquery.h

FORMS    += dialog.ui

#LIBS += -lxingAPI
LIBS += -LC:/eBEST/xingAPI/
