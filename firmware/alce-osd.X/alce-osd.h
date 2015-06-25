/*
    AlceOSD - Graphical OSD
    Copyright (C) 2015  Luis Alves

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ALCE_OSD_H
#define	ALCE_OSD_H

#include <p33Exxxx.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "graphics.h"
#include "config.h"
#include "widgets.h"
#include "videocore.h"
#include "mavlink.h"
#include "uart.h"
#include "clock.h"
#include "alce-math.h"
#include "home.h"
#include "flight_stats.h"
#include "fonts.h"


#define WITH_BOOTLOADER


/* led on the board */
#define LED_DIR     TRISAbits.TRISA10
#define LED         LATAbits.LATA10


typedef union {
    unsigned long l;
    unsigned int  w[2];
    unsigned char b[4];
} u32union;


#endif	/* ALCE_OSD_H */

