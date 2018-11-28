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
#if THERMISTORHEATER_0 == 20
  #define HEATER_0_RAW_HI_TEMP 16383
  #define HEATER_0_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_1 == 20
  #define HEATER_1_RAW_HI_TEMP 16383
  #define HEATER_1_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_2 == 20
  #define HEATER_2_RAW_HI_TEMP 16383
  #define HEATER_2_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_3 == 20
  #define HEATER_3_RAW_HI_TEMP 16383
  #define HEATER_3_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_4 == 20
  #define HEATER_4_RAW_HI_TEMP 16383
  #define HEATER_4_RAW_LO_TEMP 0
#endif
#if THERMISTORBED == 20
  #define HEATER_BED_RAW_HI_TEMP 16383
  #define HEATER_BED_RAW_LO_TEMP 0
#endif
#if THERMISTORCHAMBER == 20
  #define HEATER_CHAMBER_RAW_HI_TEMP 16383
  #define HEATER_CHAMBER_RAW_LO_TEMP 0
#endif
const short temptable_20[][2] PROGMEM = {
   { OV(	0	),    	0	 },
   { OV(	218	),    	1	 },
   { OV(	226	),    	10	 },
   { OV(	236	),    	20	 },
   { OV(	244	),    	30	 },
   { OV(	252	),    	40	 },
   { OV(	259	),    	50	 },
   { OV(	267	),    	60	 },
   { OV(	275	),    	70	 },
   { OV(	283	),    	80	 },
   { OV(	291	),    	90	 },
   { OV(	299	),    	100	 },
   { OV(	307	),    	110	 },
   { OV(	316	),    	120	 },
   { OV(	324	),    	130	 },
   { OV(	330	),    	140	 },
   { OV(	338	),    	150	 },
   { OV(	346	),    	160	 },
   { OV(	354	),    	170	 },
   { OV(	362	),    	180	 },
   { OV(	369	),    	190	 },
   { OV(	377	),    	200	 },
   { OV(	385	),    	210	 },
   { OV(	393	),    	220	 },
   { OV(	401	),    	230	 },
   { OV(	407	),    	240	 },
   { OV(	415	),    	250	 },
   { OV(	422	),    	260	 },
   { OV(	428	),    	270	 },
   { OV(	436	),    	280	 },
   { OV(	444	),    	290	 },
   { OV(	450	),    	300	 },
   { OV(	458	),    	310	 },
   { OV(	466	),    	320	 },
   { OV(	474	),    	330	 },
   { OV(	479	),    	340	 },
   { OV(	487	),    	350	 },
   { OV(	493	),    	360	 },
   { OV(	501	),    	370	 },
   { OV(	507	),    	380	 },
   { OV(	515	),    	390	 },
   { OV(	523	),    	400	 },
   { OV(	589	),    	500	 },
   { OV(	654	),    	600	 },
   { OV(	713	),    	700	 },
   { OV(	772	),    	800	 },
   { OV(	827	),    	900	 },
   { OV(	880	),    	1000	 },
   { OV(	929	),    	1100	 }
};
