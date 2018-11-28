# Gate2Marlin
Marlin firmware for 3Novatica Gate 2.0 3D printer

3Novatica Gate 2.0 is a great 3D printer, yet firmware upgrade to Marlin requires some additional work.
This repository holds files and info required to run Marlin on this printer.

Instructions:

1. git clone repo.
2. Make sure you have <a href="https://www.pjrc.com/teensy/td_download.html" target=_blank>Teensyduino</a> software add-on for Arduino installed.
3. For consistency - search for Teensyduino libraries installation folder and add support for AT90USB1287 which is quite the same as AT90USB1286
	OSX users can download AT90USB folder and put it (update) in ~/Documents/Arduino/hardware/
	Another, not tested way is to fake that the board has AT90USB1286 chip - should compile just fine.
4. Open Marlin.ino from Gate2MarlinFirmware check settings - adjust to your needs.
5. Upload firmware to board - the board has SPI interface - any method should work, Arduino Mega as programmer is tested and works.

Check attached pinout drawing for reference.

PT100 (TEMP_SENSOR_0 21) is confirmed to work great with <a href="https://e3d-online.com/v6-pt100-sensor-kit" target=_blank>E3D amp</a> and custom all-metal extruder

For management <a href="https://octoprint.org/" target=_blank>Octoprint</a> + Raspberry Pi is higly recommended for easy and flawless remote operation.

Missing (will not be provided due to little need for it):
- LCD pot menu controller pin checking
- SD card pins checking