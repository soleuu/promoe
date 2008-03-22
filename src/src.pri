include($$PWD/widgets/widgets.pri)
include($$PWD/mainwindow/mainwindow.pri)
include($$PWD/playlist/playlist.pri)
include($$PWD/equalizer/equalizer.pri)
include($$PWD/dialogs/dialogs.pri)

HEADERS += PixWidget.h \
           Skin.h \
           Display.h \
           TitleBar.h \
           Button.h \
           TextBar.h \
           NumberDisplay.h \
           TimeDisplay.h \
           XMMSHandler.h \
           SmallNumberDisplay.h \
           SkinChooser.h \
           settingsdialog.h \
           basewindow.h \
           VolumeSlider.h \
           FileDialog.h \
           BrowseModel.h \
           BrowseDialog.h

SOURCES += main.cpp \
		   PixWidget.cpp \
           Skin.cpp \
           Display.cpp \
           TitleBar.cpp \
           Button.cpp \
           TextBar.cpp \
           NumberDisplay.cpp \
           TimeDisplay.cpp \
           XMMSHandler.cpp \
           SmallNumberDisplay.cpp \
           SkinChooser.cpp \
           settingsdialog.cpp \
           basewindow.cpp \
           VolumeSlider.cpp \
           FileDialog.cpp \
           BrowseModel.cpp \
           BrowseDialog.cpp

INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
