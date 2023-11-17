# Volt

## Table of Contents

- [Introduction](#introduction)
- [Components Used](#components-used)
- [Schematics](#schematics)
- [Wiring](#wiring)
- [Library Dependencies](#library-dependencies)
- [Setup](#setup)
- [Configuration](#configuration)
- [Usage](#usage)
- [Important Note](#important-note)

## Introduction

This is a simple Arduino code designed to read temperature and humidity data from a DHT11 sensor and display it on a 16x2 LCD. The code utilizes the DHT library for sensor communication and the LiquidCrystal library to control the LCD.

## Components Used

- Arduino board
- DHT11 sensor
- 16x2 LCD
- Potentiometer for LCD contrast adjustment

## Schematics

- [Add your schematic PDF here](#)

## Wiring

- Connect the DHT11 sensor to pin 2 on the Arduino board.
- Connect the LCD to the following pins on the Arduino board:
  - RS pin to digital pin 7
  - EN pin to digital pin 8
  - D4 pin to digital pin 9
  - D5 pin to digital pin 10
  - D6 pin to digital pin 11
  - D7 pin to digital pin 12

## Library Dependencies

- [DHT Library](https://github.com/adafruit/DHT-sensor-library): This library is used for communicating with the DHT11 sensor.
- [LiquidCrystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal): This library is used for controlling the 16x2 LCD.

## Setup

1. Install the Arduino IDE on your computer.
2. Install the required libraries mentioned above.
3. Connect the components according to the provided wiring instructions.
4. Upload the code to your Arduino board.

## Configuration

- `Type`: Set the DHT sensor type. Currently set to DHT11.
- `rs`, `en`, `d4`, `d5`, `d6`, `d7`: Define the LCD pins.
- `sensePin`: Define the pin to which the DHT11 sensor is connected.
- `setTime`: Initial delay in milliseconds for the system to stabilize.
- `dt`: Delay between sensor readings in milliseconds.

## Usage

1. Power up your Arduino board with the connected components.
2. Open the Arduino Serial Monitor to view real-time temperature and humidity data.
3. The LCD will display temperature and humidity readings in a loop.

## Important Note

Ensure that the libraries are correctly installed, and the wiring is accurate before uploading the code to the Arduino board. Additionally, double-check the datasheets of your components for any specific requirements.
