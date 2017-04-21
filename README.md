# Micro Rover
Adapted from [Rick's Trinket Rover](https://github.com/rwinscot/TrinketRover), estimated build time: 3 hours.
![Image of Prototype](https://raw.githubusercontent.com/six0four/MicroRover/master/images/prototype.jpg)

## Table of Contents
1. [Instroduction](https://github.com/six0four/MicroRover#1-instroduction)
2. [Bill of Materials](https://github.com/six0four/MicroRover#2-bill-of-materials-and-required-tools)
3. [Instructions](https://github.com/six0four/MicroRover#3-instructions)
4. [Future Development](https://github.com/six0four/MicroRover#4-future-development)

## 1. Introduction
The goal of this project is to explore a common low cost microcontroller. A small rover is assembled as the vehicle. Currently the small rover moves forward until an object reflects infrared light which triggers it to reverse and turn before continuing forward again.

## 2. Bill of materials and required tools
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

## 4. Future development:
- Serial communication http://www.ernstc.dk/arduino/tinycom.html
- Optimize to stay on desk.
- Optimize to seek dark spaces.
- Optimize for line following.
- Optimize to seek bright spaces and charge via a solar panel.
- Add bluetooth.
- Connect to an Android App that is also connected to Firebase.
- Reflashing, changing, and removing bootloaders.
- Support for more operating systems.
- Support for more programming languages (Atmel AVR Assembly, ANSI C, Java, Python, javascript, etc.).
- Support for more development environments (Atmel Studio, AVR-GCC/vi|emacs/AVRdude, Visual Studio, etc.).
- Optimize for mapping.
- Communicate with an I2C device as a master
- Communicate with an SPI device.
- Communicate with an I2C device as a slave.
- Communicate with a UART device.
- Communicate via infrared remote codes.
- Add an H-bridge.
- Modify for DC motors.
- Modify for stepper motors.
- Emulate a keyboard.
- Playback sound.
- Create a custom PCB with an integrated USB port.
- Add MICROCHIP I2C I/O Expander MCP23017.
- Design shell for injection molding.
