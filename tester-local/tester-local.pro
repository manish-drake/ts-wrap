TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp
DEFINES += ZMQ_STATIC

win32: LIBS += -L$$PWD/../../libzmq64/ -llibzmq-v141-mt-4_3_2

INCLUDEPATH += $$PWD/../../libzmq64/include
DEPENDPATH += $$PWD/../../libzmq64/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../libzmq64/libzmq-v141-mt-4_3_2.lib
#else:win32-g++: PRE_TARGETDEPS += $$PWD/../../libzmq64/liblibzmq-v141-mt-4_3_2.a

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../json-core/release/ -ljson-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../json-core/debug/ -ljson-core

INCLUDEPATH += $$PWD/../json-core
DEPENDPATH += $$PWD/../json-core

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/release/ -lts-logging
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-logging/debug/ -lts-logging

INCLUDEPATH += $$PWD/../ts-logging
DEPENDPATH += $$PWD/../ts-logging

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/release/ -lts-messages
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-messages/debug/ -lts-messages

INCLUDEPATH += $$PWD/../ts-messages
DEPENDPATH += $$PWD/../ts-messages

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-client/release/ -lts-client
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-client/debug/ -lts-client

INCLUDEPATH += $$PWD/../ts-client
DEPENDPATH += $$PWD/../ts-client

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-client/release/ -lts-client
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-client/debug/ -lts-client

INCLUDEPATH += $$PWD/../ts-client
DEPENDPATH += $$PWD/../ts-client

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-comms/release/ -lts-comms
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-comms/debug/ -lts-comms

INCLUDEPATH += $$PWD/../ts-comms
DEPENDPATH += $$PWD/../ts-comms


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-wrap/release/ -lts-wrap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-wrap/debug/ -lts-wrap

INCLUDEPATH += $$PWD/../ts-wrap
DEPENDPATH += $$PWD/../ts-wrap

