#-------------------------------------------------
#
# Project created by QtCreator 2018-05-16T14:41:59
#
#-------------------------------------------------

QT       += core gui svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projekt2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    document.cpp \
    non_linear_resistor.cpp \
    source_of_constant_voltage.cpp \
    exceptions.cpp \
    delete_dialog.cpp \
    modify_dialog.cpp

HEADERS  += mainwindow.h \
    element.h \
    document.h \
    resistor.h \
    non_linear_resistor.h \
    source_of_voltage.h \
    source_of_constant_voltage.h \
    mytypes.h \
    exceptions.h \
    delete_dialog.h \
    modify_dialog.h

FORMS    += mainwindow.ui \
    exceptions.ui \
    delete_dialog.ui \
    modify_dialog.ui
