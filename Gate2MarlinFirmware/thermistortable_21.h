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
const short temptable_21[][2] PROGMEM = {
   { OV(	0), 0 },
   { OV(	222), 1 },
   { OV(	230), 10 },
   { OV(	240), 20 },
   { OV(	248), 30 },
   { OV(	256), 40 },
   { OV(	264), 50 },
   { OV(	272), 60 },
   { OV(	280), 70 },
   { OV(	288), 80 },
   { OV(	296), 90 },
   { OV(	304), 100 },
   { OV(	312), 110 },
   { OV(	322), 120 },
   { OV(	330), 130 },
   { OV(	336), 140 },
   { OV(	344), 150 },
   { OV(	352), 160 },
   { OV(	360), 170 },
   { OV(	368), 180 },
   { OV(	376), 190 },
   { OV(	384), 200 },
   { OV(	392), 210 },
   { OV(	400), 220 },
   { OV(	408), 230 },
   { OV(	414), 240 },
   { OV(	422), 250 },
   { OV(	430), 260 },
   { OV(	436), 270 },
   { OV(	444), 280 },
   { OV(	452), 290 },
   { OV(	458), 300 },
   { OV(	466), 310 },
   { OV(	474), 320 },
   { OV(	482), 330 },
   { OV(	488), 340 },
   { OV(	496), 350 },
   { OV(	502), 360 },
   { OV(	510), 370 },
   { OV(	516), 380 },
   { OV(	524), 390 },
   { OV(	532), 400 },
   { OV(	600), 500 },
   { OV(	666), 600 },
   { OV(	726), 700 },
   { OV(	786), 800 },
   { OV(	842), 900 },
   { OV(	896), 1000 },
   { OV(	946), 1100 }
};