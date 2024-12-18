# LPG Leakage Detector Using Arduino

This project is an Arduino-based system designed to detect Liquefied Petroleum Gas (LPG) leaks. It utilizes an MQ-series gas sensor to monitor gas levels and triggers an alarm when a leak is detected, enhancing safety in environments where LPG is used.

## Table of Contents

- [Introduction](#introduction)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Installation and Setup](#installation-and-setup)
- [Code Explanation](#code-explanation)
- [Operation](#operation)
- [Safety Precautions](#safety-precautions)
- [References](#references)

## Introduction

LPG is commonly used in households and industries but poses significant risks if leaks occur. This project aims to provide an early warning system to detect LPG leaks, thereby preventing potential hazards.

## Components

- **Arduino Uno**: Microcontroller board for processing sensor data.
- **MQ-2 Gas Sensor**: Detects LPG, propane, methane, and other combustible gases.
- **Buzzer**: Emits sound to alert users of a gas leak.
- **LEDs**: Visual indicators for system status.
- **16x2 LCD Display**: Displays real-time gas concentration levels.
- **Resistors and Connecting Wires**: For circuit connections.
- **Breadboard**: For assembling the circuit.

## Circuit Diagram

*Note: Please refer to the `Sensor project.pdf` file in the repository for the detailed circuit diagram.*

## Installation and Setup

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/klsavaj/LPG-Leakage-Detector_Ardiuno.git
   cd LPG-Leakage-Detector_Ardiuno
   ```

2. **Assemble the Hardware**:
   - Connect the MQ-2 sensor to the Arduino:
     - VCC to 5V
     - GND to GND
     - Analog output to A0
   - Connect the buzzer and LEDs to appropriate digital pins.
   - Connect the LCD display following standard 4-bit mode connections.

3. **Upload the Code**:
   - Open `sensorFinal.ino` in the Arduino IDE.
   - Select the correct board and COM port.
   - Upload the code to the Arduino Uno.

## Code Explanation

The code initializes the sensor and components, continuously reads gas concentration levels, and triggers alerts when levels exceed a predefined threshold.

*Note: For detailed code comments and explanations, refer to the `sensorFinal.ino` file in the repository.*

## Operation

1. **Power the System**: Connect the Arduino to a power source.
2. **Monitoring**: The system continuously monitors the gas concentration.
3. **Alert**: If LPG concentration exceeds the threshold:
   - The buzzer sounds an alarm.
   - The LED indicator lights up.
   - The LCD displays a warning message.

## Safety Precautions

- Ensure all connections are secure to prevent false alarms.
- Regularly calibrate the MQ-2 sensor for accurate readings.
- Do not place the sensor near high humidity or dusty environments.

## References

- [LPG Gas Leakage Detector using Arduino](https://github.com/nabaneet123/-LPG_gas_leak_detector_using_Arduino)
- [LPG Gas leakage detector using Arduino](https://techatronic.com/lpg-gas-leakage-detector-using-arduino-arduino-project/)
- [Arduino LPG Gas Leakage Detection System With Auto Cut-Off Regulator](https://www.instructables.com/Arduino-LPG-Gas-Leakage-Detection-System-With-Auto/)
