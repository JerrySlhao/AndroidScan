QT       += core gui
QT       += multimedia core-private
QT       += core-private
QT       += multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

include(qzxing/src/QZXing.pri)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    scan.cpp \
    widget.cpp

HEADERS += \
    scan.h \
    widget.h

FORMS += \
    scan.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../AndoridScan.pro/AndroidManifest.xml \
    ../AndoridScan.pro/build.gradle \
    ../AndoridScan.pro/gradle.properties \
    ../AndoridScan.pro/gradle/wrapper/gradle-wrapper.jar \
    ../AndoridScan.pro/gradle/wrapper/gradle-wrapper.properties \
    ../AndoridScan.pro/gradlew \
    ../AndoridScan.pro/gradlew.bat \
    ../AndoridScan.pro/res/values/libs.xml \
    ../AndoridScan.pro/res/xml/qtprovider_paths.xml
contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/../AndoridScan.pro
}
