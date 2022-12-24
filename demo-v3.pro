QT += core gui webenginewidgets webchannel
TARGET = demo-v3.1
TEMPLATE = app
CONFIG += c++11

SOURCES += \
    main.cpp\
    mainwindow.cpp \
    qtnn_v1.cpp \
    lwesample.pb.cc

HEADERS += \
    mainwindow.h \
    qtnn_v1.h \
    lwesample.pb.h


FORMS += \
    mainwindow.ui

INCLUDEPATH += /usr/local/include \
/usr/local/include/tfhe/ \
/usr/local/include/google

LIBS += /usr/local/lib/libtfhe-nayuki-avx.so  \
/usr/local/lib/libtfhe-nayuki-portable.so \
/usr/local/lib/libtfhe-spqlios-avx.so  \
/usr/local/lib/libtfhe-spqlios-fma.so \
/usr/local/lib/libprotobuf.a \
/usr/local/lib/libprotobuf-lite.a \
/usr/local/lib/libprotoc.a \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

