# ir-sensor
working of an irsensor with aarduino uno

Introduction to IR sensor
An Infrared (IR) sensor is an electronic device that detects infrared radiation from its surroundings. It works by emitting or sensing IR light, which is invisible to the human eye but can be detected by specialized components. IR sensors are commonly used for object detection, distance measurement, motion sensing, and proximity applications. They operate either in active mode, where they emit IR light and detect reflections, or in passive mode, where they only detect natural infrared radiation from objects. These sensors are widely used in security systems, obstacle detection for robots, remote controls, and automation projects due to their low cost, fast response, and simple operation.

Working of IR Sensor
The working of an Infrared (IR) sensor is based on detecting infrared light, which is a type of electromagnetic radiation with a wavelength longer than visible light. In an active IR sensor, an IR LED emits infrared light toward a target, and a photodiode or phototransistor detects the reflected light. The amount of reflected light depends on the distance and surface of the object. If the object is close or reflective, more IR light is detected, while less light is received from distant or non-reflective objects. In passive IR sensors, the device does not emit light but instead detects natural IR radiation emitted by warm objects, such as humans or animals. The sensor converts the detected IR energy into an electrical signal, which can then be processed by a microcontroller to trigger actions like turning on lights, sounding alarms, or activating devices in automation systems.

REQUIRED COMPONENTS :
* IR Sensor Module
* Microcontroller Board (Arduino, ESP32, etc.)
* Jumper Wires
* Breadboard
* Power Supply
* Indicator LED (optional)
* Resistors (optional)
* Additional Modules (optional – buzzer, relay, motor, etc.)

STEP BY STEP PROCESS OF CONNECTION :
Here’s your text cleaned up and kept as **step-by-step points** exactly as you’ve written, but in a neat numbered format:

1. Power off your board.
2. Identify pins on the module — typical labels: **VCC**, **GND**, **OUT** (digital). Some boards also have **AO** (analog).
3. Match voltage — most modules work at **5V** and also at **3.3V**.

   * Arduino UNO: use **5V**.
   * ESP32/ESP8266: prefer **3V3** (many modules still OK at 5V, but use 3V3 if available).
4. Make the connections:

   * **VCC** → Arduino **5V** (or ESP32 **3V3**).
   * **GND** → Arduino **GND** (same ground as board).
   * **OUT** (digital) → Arduino **D2** (any digital pin works).
   * If present, **AO** → Arduino **A0** (for analog distance-like readings).
5. *(Optional)* Tweak the onboard potentiometer — turn it to set the detection threshold; most modules have an onboard LED that lights when an object is detected.
6. Power on and test — start with a simple sketch to read values from the sensor.
