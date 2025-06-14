# LPG Gas Leakage Detection System

## Project Overview

This project is a **Gas Leakage Detection System** designed to detect LPG gas leaks and prevent potential hazards. It uses an MQ-2 gas sensor to detect LPG concentration, triggering an alarm and automatically turning off the gas regulator via a servo motor when leakage exceeds a safety threshold. The system aims to provide an affordable and effective solution for domestic and industrial safety.

## Project Tags

**Tech Stack:**

* Arduino UNO
* MQ-2 Gas Sensor
* Servo Motor
* Buzzer
* LED
* Breadboard
* Arduino IDE (Embedded C)

## Aim

To design and implement a gas leakage detection system that provides early warning and automatic shutoff to ensure safety in environments where LPG gas is used.


## Principle

The MQ-2 gas sensor detects gas concentration and produces an analog output proportional to the gas level. When this level exceeds a predefined threshold, the system activates a buzzer and LED alarm and turns off the gas regulator using a servo motor.

## Components Used

* Arduino UNO
* MQ-2 Gas Sensor
* Buzzer
* LED
* 220-ohm Resistors
* Servo Motor
* Breadboard
* Connecting Wires


## Construction

All components are connected to the Arduino UNO via a breadboard. The MQ-2 sensor provides an analog signal to the Arduino. The buzzer and LED are controlled through digital pins, and the servo motor connected to the gas regulator is controlled via PWM. The entire circuit is powered through the Arduino.


## Working

When the MQ-2 sensor detects gas levels above a safe threshold, the Arduino immediately activates the LED and buzzer to alert users. Simultaneously, the servo motor closes the gas regulator to prevent further leakage. The system continuously monitors gas concentration and resets automatically when levels return to normal.


## Arduino Code

```cpp
#include<Servo.h>

int rled = 2, buzz = 7, sensor = A5;
Servo s;

void setup() {
  s.attach(9);
  pinMode(sensor, INPUT);
  pinMode(rled, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A5);
  if (val > 450) {
    digitalWrite(rled, HIGH);
    digitalWrite(buzz, HIGH);
    s.write(20);
  } else {
    digitalWrite(rled, LOW);
    digitalWrite(buzz, LOW);
    s.write(180);
  }
  Serial.println(val);
  delay(500);
}
```

## Applications

* **Home Safety:** Detects LPG leaks in kitchens.
* **Industrial Safety:** Monitors gas pipelines and storage areas.
* **Vehicle Safety:** Detects leaks in CNG/LPG-fueled vehicles.
* **Environmental Monitoring:** Detects harmful gas emissions in factories.
* **Agriculture:** Monitors CO2 and methane levels in greenhouses.
* **Pipeline Monitoring:** Detects gas leaks along transportation pipelines.

## Result

The gas leakage detection system successfully detects LPG gas leaks and triggers both visual and audible alerts while automatically turning off the gas regulator to prevent further leakage. The system provides a low-cost, efficient safety solution for gas-related hazards.

