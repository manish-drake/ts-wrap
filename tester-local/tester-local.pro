TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ts-wrap/release/ -lts-wrap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ts-wrap/debug/ -lts-wrap

INCLUDEPATH += $$PWD/../ts-wrap
DEPENDPATH += $$PWD/../ts-wrap
