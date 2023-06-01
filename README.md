<img src="https://content.arduino.cc/website/Arduino_logo_teal.svg" height="100" align="right" />

`Arduino_BMI270_BMM150_Modded`
=======================
<!-- Dieser Bumms muss noch umgeschrieben werden lol -->
<!-- [![Compile Examples status](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/compile-examples.yml/badge.svg)](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/compile-examples.yml)
[![Spell Check](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/spell-check.yml/badge.svg)](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/spell-check.yml)
[![Sync Labels status](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/sync-labels.yml/badge.svg)](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions/workflows/sync-labels.yml)
[![Arduino Lint](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/workflows/Arduino%20Lint/badge.svg)](https://github.com/arduino-libraries/Arduino_BMI270_BMM150/actions?workflow=Arduino+Lint) -->

Allows you to read the accelerometer, magnetometer and gyroscope values from the combo BMI270+BMM150 IMU on your Arduino Nano 33 BLE Sense Rev2. This version extends the functionality of the original library by implementing support for setting data rates, measuring scales and offsets.

This mod is based on the LSM9DS1 library mod from FemmeVerbeek as it uses the same aliases and function names.

## :mag_right: Resources

* [How to install a library](https://www.arduino.cc/en/guide/libraries)
* [Help Center](https://support.arduino.cc/)
* [Forum](https://forum.arduino.cc)
* [Official lib](https://github.com/arduino-libraries/Arduino_BMI270_BMM150)
* [Modded lib for the LSM9DS1](https://github.com/FemmeVerbeek/Arduino_LSM9DS1)

## :bug: Bugs & Issues

If you want to report a general issue with this library, you can submit it to the [issue tracker](https://github.com/arduino-libraries/Arduino_Braccio_plusplus/issues) of the **original repository** as I do not provide extended support for most of the code. Remember to include as much detail as you can about your hardware set-up, code and steps for reproducing the issue. Make sure you're using an original Arduino board.

If you have some specific issue with the extended functionality of this library (setting ODRs and FS for the sensors), please submit them to the [issue tracker](https://github.com/Dachgruber/Arduino_BMI270_BMM150_Modded/issues) of **this** repository as the original developers are unlikly to answer questions regarding these functions. Remember to include as much detail as you can about your hardware set-up, code and steps for reproducing the issue. Make sure you're using an original Arduino board.

## :technologist: Development

There are many ways to contribute:

* Improve documentation and examples
* Fix a bug
* Test open Pull Requests
* Implement a new feature
* Discuss potential ways to improve this library

You can submit your patches directly to this repository as Pull Requests. Please provide a detailed description of the problem you're trying to solve and make sure you test on real hardware.

## :yellow_heart: Donations
I am not an offical member of the arduino team. If you wish to donate, please support the official team by [donating](https://www.arduino.cc/en/donate/) or [sponsoring](https://github.com/sponsors/arduino), as well as [buying original Arduino boards](https://store.arduino.cc/) which is the best way to make sure their effort can continue in the long term.
The open-source code of the original library is maintained by Arduino with the help of the community. They invest a considerable amount of time in testing code, optimizing it and introducing new features.

## License

Copyright (c) 2022 Arduino SA. All rights reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
