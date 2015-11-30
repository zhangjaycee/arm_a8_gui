#-------------------------------------------------
#
# Project created by QtCreator 2015-10-25T11:04:35
#
#-------------------------------------------------

QT       += core gui

TARGET = 1025test2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mydlg1.cpp \
    mydlg2.cpp \
    mydlg3.cpp \
    mydlg4.cpp \
    mydlg5.cpp \
    mydlg6.cpp \
    mydlg7.cpp \
    mydlg8.cpp \
    mydlg9.cpp \
    mydlg10.cpp \
    dialogct.cpp \
    v4l2grab.cpp \
    handfinder.cpp \
    ct.cpp \
    convert.cpp \
    compressivetracker.cpp \
    define.cpp

HEADERS  += mainwindow.h \
    mydlg1.h \
    mydlg2.h \
    mydlg3.h \
    mydlg4.h \
    mydlg5.h \
    mydlg6.h \
    mydlg7.h \
    mydlg8.h \
    mydlg9.h \
    mydlg10.h \
    dialogct.h \
    v4l2grab.h \
    handfinder.h \
    define.h \
    ct.h \
    convert.h \
    compressivetracker.h

FORMS    += mainwindow.ui \
    mydlg1.ui \
    mydlg2.ui \
    mydlg3.ui \
    mydlg4.ui \
    mydlg5.ui \
    mydlg6.ui \
    mydlg7.ui \
    mydlg8.ui \
    mydlg9.ui \
    mydlg10.ui \
    dialogct.ui

INCLUDEPATH += /usr/local/arm/opencv/include\
/usr/local/arm/opencv/include/opencv\
/usr/local/arm/opencv/include/opencv2

LIBS += /usr/local/arm/opencv/lib/libopencv_highgui.so\
/usr/local/arm/opencv/lib/libopencv_core.so\
/usr/local/arm/opencv/lib/libopencv_imgproc.so
