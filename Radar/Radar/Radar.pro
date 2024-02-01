QT       += core gui charts serialport
qtHaveModule(opengl): QT += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
QMAKE_LFLAGS += -static

QMAKE_CXXFLAGS_RELEASE += -Ofast
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Radar/radar.cpp \
    caidat_hienthi_form.cpp \
    caidat_hieuchinh_form.cpp \
    caidat_ketnoi_form.cpp \
    caidat_nangcao_form.cpp \
    dieukhien_chiendau_form.cpp \
    dieukhien_huanluyen_form.cpp \
    dieukhien_nangcao_form.cpp \
    gaimsat_dsp.cpp \
    giamsat_canhbao.cpp \
    giamsat_pwr.cpp \
    giamsat_trm.cpp \
    giamsat_trx.cpp \
    giamsat_xltt.cpp \
    lienhop_dkmayhoi_form.cpp \
    lienhop_dkqdt_form.cpp \
    lienhop_gsmayhoi_form.cpp \
    lienhop_gsqdt_form.cpp \
    lienhop_videoqdt_form.cpp \
    main.cpp \
    mainwindow.cpp \
    newtarget_form.cpp \
    quydao_danhsach.cpp \
    quydao_docao.cpp \
    radarview.cpp \
    rightframe.cpp \
    targetinfo.cpp

HEADERS += \
    Radar/radar.h \
    caidat_hienthi_form.h \
    caidat_hieuchinh_form.h \
    caidat_ketnoi_form.h \
    caidat_nangcao_form.h \
    dieukhien_chiendau_form.h \
    dieukhien_huanluyen_form.h \
    dieukhien_nangcao_form.h \
    gaimsat_dsp.h \
    giamsat_canhbao.h \
    giamsat_pwr.h \
    giamsat_trm.h \
    giamsat_trx.h \
    giamsat_xltt.h \
    lienhop_dkmayhoi_form.h \
    lienhop_dkqdt_form.h \
    lienhop_gsmayhoi_form.h \
    lienhop_gsqdt_form.h \
    lienhop_videoqdt_form.h \
    mainwindow.h \
    newtarget_form.h \
    quydao_danhsach.h \
    quydao_docao.h \
    radarview.h \
    rightframe.h \
    targetinfo.h

INCLUDEPATH += \
    Radar

FORMS += \
    caidat_hienthi_form.ui \
    caidat_hieuchinh_form.ui \
    caidat_ketnoi_form.ui \
    caidat_nangcao_form.ui \
    dieukhien_chiendau_form.ui \
    dieukhien_huanluyen_form.ui \
    dieukhien_nangcao_form.ui \
    gaimsat_dsp.ui \
    giamsat_canhbao.ui \
    giamsat_pwr.ui \
    giamsat_trm.ui \
    giamsat_trx.ui \
    giamsat_xltt.ui \
    lienhop_dkmayhoi_form.ui \
    lienhop_dkqdt_form.ui \
    lienhop_gsmayhoi_form.ui \
    lienhop_gsqdt_form.ui \
    lienhop_videoqdt_form.ui \
    mainwindow.ui \
    newtarget_form.ui \
    quydao_danhsach.ui \
    quydao_docao.ui \
    rightframe.ui \
    targetinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    xanh_duong-removebg-preview (1).png \
    xanh_duong-removebg-preview (2).png \
    xanh_duong-removebg-preview (3).png \
    xanh_duong-removebg-preview (4).png \
    xanh_duong-removebg-preview (5).png \
    xanh_duong-removebg-preview (6).png
