/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// PT100 with INA826 amp on Ultimaker v2.0 electronics
// The PT100 in the Ultimaker v2.0 electronics has a high sample value for a high temperature.
// This does not match the normal thermistor behaviour so we need to set the following defines
#if THERMISTORHEATER_0 == 21
  #define HEATER_0_RAW_HI_TEMP 16383
  #define HEATER_0_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_1 == 21
  #define HEATER_1_RAW_HI_TEMP 16383
  #define HEATER_1_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_2 == 21
  #define HEATER_2_RAW_HI_TEMP 16383
  #define HEATER_2_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_3 == 21
  #define HEATER_3_RAW_HI_TEMP 16383
  #define HEATER_3_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_4 == 21
  #define HEATER_4_RAW_HI_TEMP 16383
  #define HEATER_4_RAW_LO_TEMP 0
#endif
#if THERMISTORBED == 21
  #define HEATER_BED_RAW_HI_TEMP 16383
  #define HEATER_BED_RAW_LO_TEMP 0
#endif
#if THERMISTORCHAMBER == 21
  #define HEATER_CHAMBER_RAW_HI_TEMP 16383
  #define HEATER_CHAMBER_RAW_LO_TEMP 0
#endif
#define AREF 4.35
#define AFAC (5.0/AREF)
const short temptable_21[][2] PROGMEM = {
   { OV(	0 * AFAC),0 },
   { OV(	222 * AFAC),1 },
   { OV(	230 * AFAC),10 },
   { OV(	240 * AFAC),20 },
   { OV(	248 * AFAC),30 },
   { OV(	256 * AFAC),40 },
   { OV(	264 * AFAC),50 },
   { OV(	272 * AFAC),60 },
   { OV(	280 * AFAC),70 },
   { OV(	288 * AFAC),80 },
   { OV(	296 * AFAC),90 },
   { OV(	304 * AFAC),100 },
   { OV(	312 * AFAC),110 },
   { OV(	322 * AFAC),120 },
   { OV(	330 * AFAC),130 },
   { OV(	336 * AFAC),140 },
   { OV(	344 * AFAC),150 },
   { OV(	352 * AFAC),160 },
   { OV(	360 * AFAC),170 },
   { OV(	368 * AFAC),180 },
   { OV(	376 * AFAC),190 },
   { OV(	384 * AFAC),200 },
   { OV(	392 * AFAC),210 },
   { OV(	400 * AFAC),220 },
   { OV(	408 * AFAC),230 },
   { OV(	414 * AFAC),240 },
   { OV(	422 * AFAC),250 },
   { OV(	430 * AFAC),260 },
   { OV(	436 * AFAC),270 },
   { OV(	444 * AFAC),280 },
   { OV(	452 * AFAC),290 },
   { OV(	458 * AFAC),300 },
   { OV(	466 * AFAC),310 },
   { OV(	474 * AFAC),320 },
   { OV(	482 * AFAC),330 },
   { OV(	488 * AFAC),340 },
   { OV(	496 * AFAC),350 },
   { OV(	502 * AFAC),360 },
   { OV(	510 * AFAC),370 },
   { OV(	516 * AFAC),380 },
   { OV(	524 * AFAC),390 },
   { OV(	532 * AFAC),400 },
   { OV(	600 * AFAC),500 },
   { OV(	666 * AFAC),600 },
   { OV(	726 * AFAC),700 },
   { OV(	786 * AFAC),800 },
   { OV(	842 * AFAC),900 },
   { OV(	896 * AFAC),1000 },
   { OV(	946 * AFAC),1100 }
};