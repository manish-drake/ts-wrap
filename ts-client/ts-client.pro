#-------------------------------------------------
#
# Project created by QtCreator 2017-09-26T12:52:32
#
#-------------------------------------------------

QT       -= core gui
TARGET = ts-client
TEMPLATE = lib

DEFINES += TSCLIENT_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    zlistener.cpp \
    zclient.cpp \
    routerclient.cpp \
    envelope.cpp \
    message.cpp \
    routerregistermessage.cpp \
    routerunregistermessage.cpp \
    json_common.cpp \
    RouterRegister.cpp \
    RouterRegisterReply.cpp

HEADERS += \
    zlistener.h \
    socketpool.h \
    zclient.h \
    routerclient.h \
    semaphore.h \
    envelope.h \
    jsonmessagebase.h \
    message.h \
    routerregistermessage.h \
    routerunregistermessage.h \
    RouterRegister.h \
    RouterRegisterReply.h

#!macx:!ios{
#     QMAKE_LFLAGS +=-Wl,-Map=ts-client.map
#     QMAKE_LFLAGS_DEBUG +=-Wl,-Map=ts-client.map
#}

unix:!macx:!android:{
        target.path = /opt/ts-qt/bin
        INSTALLS += target

        linux-oe-g++ {
            LIBS += -L$$PWD/../libzmq-bin/lib -lzmq
            INCLUDEPATH += $$PWD/../libzmq-bin/include
            DEPENDPATH += $$PWD/../libzmq-bin/include
            PRE_TARGETDEPS += $$PWD/../libzmq-bin/lib/libzmq.a
        } else {
            LIBS += -L/usr/local/lib -lzmq
            INCLUDEPATH += /usr/local/include
            DEPENDPATH += /usr/local/include
            PRE_TARGETDEPS += /usr/local/lib/libzmq.a
        }
}

win32:!android {
    LIBS += -L$$PWD/'../../../../Program Files (x86)/ZeroMQ 4.0.4/lib/' -llibzmq-v120-mt-4_0_4

    INCLUDEPATH += $$PWD/'../../../../Program Files (x86)/ZeroMQ 4.0.4/include'
    DEPENDPATH += $$PWD/'../../../../Program Files (x86)/ZeroMQ 4.0.4/include'
}

android{
    unix:!macx: LIBS += -L$$PWD/../../../../zeromq-android/lib/ -lzmq

    INCLUDEPATH += $$PWD/../../../../zeromq-android/include
    DEPENDPATH += $$PWD/../../../../zeromq-android/include
}

macx:!ios{
    macx: LIBS += -L$$PWD/../libzmq_dist/lib/ -lzmq

    INCLUDEPATH += $$PWD/../libzmq_dist/include
    DEPENDPATH += $$PWD/../libzmq_dist/include

    macx: PRE_TARGETDEPS += $$PWD/../libzmq_dist/lib/libzmq.a
}

ios{
    LIBS += -L$$PWD/../libzmq_dist_ios/lib/ -lzmq

    INCLUDEPATH += $$PWD/../libzmq_dist_ios/include
    DEPENDPATH += $$PWD/../libzmq_dist_ios/include

    PRE_TARGETDEPS += $$PWD/../libzmq_dist_ios/lib/libzmq.a
}

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/release/ -lts-logging
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/debug/ -lts-logging
else:unix: LIBS += -L$$OUT_PWD/../ts-logging/ -lts-logging

INCLUDEPATH += $$PWD/../ts-logging
DEPENDPATH += $$PWD/../ts-logging


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../json-core/release/ -ljson-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../json-core/debug/ -ljson-core
else:unix: LIBS += -L$$OUT_PWD/../json-core/ -ljson-core

INCLUDEPATH += $$PWD/../json-core
DEPENDPATH += $$PWD/../json-core


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/release/ -lts-messages
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/debug/ -lts-messages
else:unix: LIBS += -L$$OUT_PWD/../ts-messages/ -lts-messages

INCLUDEPATH += $$PWD/../ts-messages
DEPENDPATH += $$PWD/../ts-messages
