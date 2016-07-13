#-------------------------------------------------
#
# Project created by QtCreator 2016-07-12T10:41:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wave_neural_network
TEMPLATE = app

linux:QMAKE_CXXFLAGS += -Werror
linux:QMAKE_CXXFLAGS += -pedantic


SOURCES += main.cpp\
        mainwindow.cpp \
    neuron.cpp \
    state.cpp \
    statemachine.cpp

HEADERS  += mainwindow.h \
    neuron.h \
    state.h \
    statemachine.h

FORMS    += mainwindow.ui
