## Using an Arduino Uno as an ISP and Atmel Studio 7 for programming

#### Setup:

* Arduino Uno
* Atmel Studio 7
* avrdude

#### Wiring

  * D13 --> Pin 19
  * D12 --> Pin 18
  * D11 --> Pin 17
  * D10 --> Pin 1
  * +5v --> Pin 7
  * GND --> Pin 8
  
#### Atmel Studio External Tool Setup

<p align="center">
  <img src="https://i.imgur.com/DzgEI4t.png?raw=true" alt="External Tool Setup"/>
</p>

##### Contents of the Batch file being pointed to in the command text box
````
avrdude -v -patmega328p -cstk500v1 -PCOM4 -b19200 -Uflash:w:%1:i
````
