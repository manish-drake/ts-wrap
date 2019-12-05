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


win32 {
    LIBS += -Lc:/libzmq/4_0_4/lib -llibzmq-v120-mt-4_0_4

    INCLUDEPATH += c:/libzmq/4_0_4/include
    DEPENDPATH += c:/libzmq/4_0_4/include
}


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/debug -lts-logging
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/debug -lts-logging
else:unix: LIBS += -L$$OUT_PWD/../ts-logging/debug -lts-logging

INCLUDEPATH += $$PWD/../ts-logging
DEPENDPATH += $$PWD/../ts-logging


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../json-core/debug -ljson-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../json-core/debug -ljson-core
else:unix: LIBS += -L$$OUT_PWD/../json-core/debug -ljson-core

INCLUDEPATH += $$PWD/../json-core
DEPENDPATH += $$PWD/../json-core


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/debug -lts-messages
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/debug -lts-messages
else:unix: LIBS += -L$$OUT_PWD/../ts-messages/ -lts-messages

INCLUDEPATH += $$PWD/../ts-messages
DEPENDPATH += $$PWD/../ts-messages
