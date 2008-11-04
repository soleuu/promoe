/**
 *  This file is a part of Promoe, an XMMS2 Client.
 *
 *  Copyright (C) 2005-2008 XMMS2 Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#include <QApplication>

class Application;
#if defined(qApp)
#undef qApp
#endif
#define qApp (static_cast<Application *>(QCoreApplication::instance()))
#define App (static_cast<Application *>(QCoreApplication::instance()))

class Application : public QApplication
{
	Q_OBJECT

	signals:
		void settingsChanged (void);

	public:
		Application (int &argc, char **argv);


	public slots:
		void cleanupHandler ();
		void handleDisconnected ();

	// TODO: Search some better place for those methods
	public:
		bool isTimemodeReverse(void) {return m_timemode_reverse;}
		void setTimemodeReverse(bool b) {m_timemode_reverse = b;}

	public slots:
		void toggleTime () {m_timemode_reverse = !m_timemode_reverse;}

	private:
		bool m_timemode_reverse;
};
