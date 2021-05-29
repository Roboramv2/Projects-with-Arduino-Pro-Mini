# Projects with Arduino Pro Mini

The mini does not contain a USB port. We need an FTDI for programming it (or flashing your program on it). I am using an [FTDI232 USB to UART IC](https://robu.in/product/ft232rl-usb-to-ttl-5v-3-3v-download-cable-to-serial-adapter-module-for-arduino/) that I bought on robu.in

<img src="./images/mini.jpg" alt="Scale" width="100"/>

***

## Soldering:

The pro mini did not come with the pins attached, I had to solder them as shown in the images below.

<img src="./images/solder1.jpg" alt="drawing" width="200"/>
<img src="./images/solder2.jpg" alt="drawing" width="76"/>
<img src="./images/solder3.jpg" alt="drawing" width="100"/>

## Modules:

1. Setting up: (folder named intro)
    * This module covers the basics of interfacing with the mini.
    * This serves as an usage guide for the FTDI that we need for programming the arduino mini.
    * [Datasheet](http://www.ftdichip.com/Support/Documents/DataSheets/ICs/DS_FT232R.pdf)

2. Walking bot: (folder named walking bot)
    * This module contains files related to my first actual project with the pro mini.
    * A simple robot capable of walking, made using arduino pro mini, two 9v batteries and four sg90 servos.
    * <img src="./images/walking_initial.jpg" alt="drawing" width="180"/><img src="./images/walking_early.jpg" alt="drawing" width="180"/><img src="./images/walking_mid.jpg" alt="drawing" width="180"/>