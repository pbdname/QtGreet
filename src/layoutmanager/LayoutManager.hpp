/*
	*
	* Copyright 2020 Britanicus <marcusbritanicus@gmail.com>
	*
	* This file is a part of QtGreet project (https://gitlab.com/marcusbritanicus/QtGreet)
	*

	*
	* This program is free software; you can redistribute it and/or modify
	* it under the terms of the GNU General Public License as published by
	* the Free Software Foundation; either version 3 of the License, or
	* (at your option) any later version.
	*

	*
	* This program is distributed in the hope that it will be useful,
	* but WITHOUT ANY WARRANTY; without even the implied warranty of
	* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	* GNU General Public License for more details.
	*

	*
	* You should have received a copy of the GNU General Public License
	* along with this program; if not, write to the Free Software
	* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
	* MA 02110-1301, USA.
	*
*/

#pragma once

#include <QtCore>
#include <QtGui>
#include <QtWidgets>

#include "hjson.h"

class LayoutManager {

    public:
        LayoutManager( QString layoutFile );
        void applyLayout( QWidget *w );

    private:
        QVBoxLayout* getVLayout( Hjson::Value layout );
        QHBoxLayout* getHLayout( Hjson::Value layout );

        QWidget *getWidget( std::string objName, Hjson::Value obj );

        /* Initalize the screen size */
        QSize screenSize;

        /* Layout */
        Hjson::Value mLayout;
        QLayout *lyt = nullptr;
};
