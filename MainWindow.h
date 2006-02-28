#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

class MainWindow;

#include "XMMSHandler.h"

#include <iostream>

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>
#include <QWidget>
#include <QHash>

#include "Skin.h"
#include "XmmsQT4.h"
#include "MainDisplay.h"
#include "ShadedDisplay.h"
#include "Playlist.h"

using namespace std;

class MainWindow : public QMainWindow
{
	Q_OBJECT
	public:
		MainWindow (QWidget *parent);
		~MainWindow (void);

		MainDisplay *getMD () { return m_display; }
		ShadedDisplay *getSD () { return m_shaded; }

		bool getShaded (void) { return m_isshaded; }
		void setPL (PlaylistWindow *p) { m_playlistwin = p; }
		void moveEvent (QMoveEvent *event);

	public slots:
		void switchDisplay ();
		void togglePL (void);

	private:
		bool m_isshaded;

		MainDisplay *m_display;
		ShadedDisplay *m_shaded;
		PlaylistWindow *m_playlistwin;
};


#endif
