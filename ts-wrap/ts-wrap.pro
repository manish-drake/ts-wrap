QT       -= core gui
TARGET = ts-wrap
TEMPLATE = lib
DEFINES += TSWRAP_LIBRARY


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
    DllMain.cpp \
    stdafx.cpp \
    dllexp.cpp

HEADERS += \
    stdafx.h \
    dllexp.h



win32: {
    LIBS += -Lc:/libzmq/4_0_4/lib -llibzmq-v120-mt-4_0_4

    INCLUDEPATH += c:/libzmq/4_0_4/include
    DEPENDPATH += c:/libzmq/4_0_4/include
}


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-client/release/ -lts-client
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-client/debug/ -lts-client
else:unix: LIBS += -L$$OUT_PWD/../ts-client/ -lts-client

INCLUDEPATH += $$PWD/../ts-client
DEPENDPATH += $$PWD/../ts-client


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

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-comms/release/ -lts-comms
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-comms/debug/ -lts-comms

INCLUDEPATH += $$PWD/../ts-comms
DEPENDPATH += $$PWD/../ts-comms
