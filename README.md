# Micro Rover
Adapted from [Rick's Trinket Rover](https://github.com/rwinscot/TrinketRover), estimated build time: 3 hours.
![Image of Prototype](https://raw.githubusercontent.com/six0four/MicroRover/master/images/prototype.jpg)

## Table of Contents
1. [Introduction](https://github.com/six0four/MicroRover#1-introduction)
2. [Bill of Materials and Required Tools](https://github.com/six0four/MicroRover#2-bill-of-materials-and-required-tools)
3. [Instructions](https://github.com/six0four/MicroRover#3-instructions)
4. [Future Development](https://github.com/six0four/MicroRover#4-future-development)

## 1. Introduction
A common introduction to microcontrollers is through the [Lego NXT ROBOTC Curriculum](http://www.education.rec.ri.cmu.edu/previews/robot_c_products/teaching_rc_lego_v2_preview/home/ROBOTC_Curriculum_Outline.pdf). This project aims to use a low cost platform to also explore microcontrollers. Similarly, a small rover is assembled as the vehicle. Currently the small rover moves forward until an object reflects infrared light which triggers it to reverse and turn before continuing forward again.

## 2. Bill of Materials and Required Tools
For a list of materials please see the Excel file in the repository.

Regarding tools, the following are a minimum:
- Safety glasses.
- Soldering iron and lead free solder (to be added to materials list).
- Small side cutting pliers.
- Small Phillips screw driver.

## 3. Instructions
1. Soldering guidance:
	1. Start off by watching some ahort soldering guidance videos: [NASA Jove Project](https://radiojove.gsfc.nasa.gov/telescope/soldering.htm).
	2. Continue by watching some [YouTube Videos](https://www.youtube.com/watch?v=BLfXXRfRIzY&list=PLQ32vZrF5U2lFOJTtZDytBWBYVLNp4RYz).
	3. Be sure to wear safety glasses and consult an expert regarding safety, you can even start at your [local hackerspace](https://wiki.hackerspaces.org/List_of_Hackerspaces).
2. Start with programming trinket prior to soldering to make sure it works.
3. Repeat after soldering to make sure trinket undamaged.

Fritzing diagrams needed
![Circuit](raw.githubusercontent.com/six0four/MicroRover/master/images/circuit.jpg)

## 4. Future Development:
- Serial communication http://www.ernstc.dk/arduino/tinycom.html
- Optimize to stay on desk.
- Optimize to seek dark spaces.
- Optimize for line following.
- Optimize to seek bright spaces and charge via a solar panel.
- Add bluetooth.
- Connect to an Android App that is also connected to Firebase.
- Re-flashing, changing, and removing boot loaders.
- Support for more operating systems.
- Support for more programming languages (Atmel AVR Assembly, ANSI C, Java, Python, javascript, etc.).
- Support for more development environments (AVR-GCC/vi|emacs/AVRdude, Atmel Studio/Visual Studio, etc.).
- Optimize for mapping.
- Communicate with an I2C device as a master
- Communicate with an SPI device.
- Communicate with an I2C device as a slave.
- Communicate with a UART device.
- Communicate via infra-red remote codes.
- Add an H-bridge.
- Add an opto-coupler.
- Add a bidirectional level shifter.
- Modify for DC motors, optical encoders, relays.
- Modify for stepper motors (bipolar and unipolar).
- https://thewanderingengineer.com/2014/08/11/pin-change-interrupts-on-attiny85/
- PID feedback control, fan, thermistor, thermocouple.
- Function generator.
- D to A, PWM.
- A to D, filters.
- Solar cell, photo-resistor.
- Wheatstone bridge, instrumentation amplifier.
- Displays.
- De-bouncing reed switch.
- Emulate a keyboard.
- Playback sound.
- Create a custom PCB with an integrated USB port.
- Shift register, multiplexer.
- RS232, RS485.
- Add MICROCHIP I2C I/O Expander MCP23017.
- Use with http://www.atmel.com/tools/atatmel-ice.aspx and http://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATPOWERDEBUGGER
- Design shell for injection molding.
- Bar/QR code scanners, RFID, magnetic strip, fingerprint readers.
- Add SJA1000/MCP2515 for CAN.
- http://perso.uclouvain.be/fstandae/lightweight_ciphers/
- http://www.instructables.com/id/Optical-Mouse-Odometer-for-Arduino-Robot/?ALLSTEPS
