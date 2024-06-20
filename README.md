# PCB Designing

## Abstract

This project focuses on the design and development of a Printed Circuit Board (PCB) tailored for microcontroller-based embedded systems. The objective is to create a versatile and efficient platform capable of accommodating a wide range of applications, ensuring optimal performance, power efficiency, and ease of integration. This project contributes to the advancement of microcontroller-based PCB design methodologies, promoting efficient and reliable embedded systems.

## Table of Contents

1. [Introduction](#introduction)
2. [Software Requirements](#software-requirements)
3. [Manufacturing](#manufacturing)
4. [Methods Involved in Manufacturing](#methods-involved-in-manufacturing)
5. [Parts of PCB](#parts-of-pcb)
6. [Types of PCB](#types-of-pcb)
7. [Advantages of PCB Designing](#advantages-of-pcb-designing)
8. [Introduction to EAGLE](#introduction-to-eagle)
9. [Microcontroller](#microcontroller)
10. [Development Board Circuit](#development-board-circuit)
11. [Audio Amplifier](#audio-amplifier)
12. [LED Blinking](#led-blinking)
13. [Clap Switch Using 555 Timer and BC-547 Transistors](#clap-switch-using-555-timer-and-bc-547-transistors)
14. [Ultrasonic Sensor](#ultrasonic-sensor)
15. [Our Errors and How We Overcame Them](#our-errors-and-how-we-overcame-them)
16. [Acknowledgement](#acknowledgement)

## Introduction

In today’s fast-paced technological landscape, electronic devices have become increasingly complex, demanding high-speed data transmission. Printed Circuit Boards (PCBs) are at the core of these devices, acting as the central platform for interconnecting components and facilitating signal flow. This project aims to tackle the challenges associated with microcontroller-based PCB design by developing an optimized and adaptable platform that can serve as a foundation for various embedded system applications.

## Software Requirements

1. **EAGLE Software**
   - EAGLE is a widely-used electronic design automation (EDA) software for schematic capture and PCB layout, developed by Autodesk.
   - [Download EAGLE Software](https://eagle-updates.circuits.io/downloads/9_6_2/Autodesk_EAGLE_9.6.2_English_Win_64bit.exe)

2. **Arduino IDE**
   - The Arduino IDE app simplifies the process of programming and developing projects for microcontrollers.
   - [Download Arduino IDE](https://downloads.arduino.cc/arduino-1.8.19-windows.exe)

## Manufacturing

The PCB manufacturing process is complex and requires multiple steps to ensure performance. It involves designing layouts, preparing circuit images, etching copper traces, drilling holes, and applying solder mask and silkscreen layers.

## Methods Involved in Manufacturing

1. **Photographic Processing**
2. **Milling Machine**
3. **Silk Screening Process**

## Parts of PCB

1. Substrate
2. Copper Traces
3. Pads
4. Through-Holes
5. Components
6. Solder Mask
7. Silkscreen
8. Vias
9. Power and Ground Planes
10. Surface Finishes
11. Solder Paste

## Types of PCB

1. Single-Sided PCB
2. Double-Sided PCB
3. Multilayer PCB
4. Rigid PCB
5. Flexible PCB (FPC)
6. Rigid-Flex PCB

## Advantages of PCB Designing

- Reduced Wiring Errors
- Compact Size
- Low Electronic Noise
- High Reliability
- Low Cost

## Introduction to EAGLE

EAGLE is an EDA software for designing PCBs, assisting engineers and hobbyists in creating circuit schematics and layouts. It includes component placement, connection, design rule checking, and supports single and multi-layer designs.

## Microcontroller

### ATmega328P

- Introduction: This section provides an overview of the ATmega328P microcontroller, its features, and its applications. It typically includes information on its architecture, capabilities, and common use cases.
- Pin Description: A detailed description of each pin on the ATmega328P, including its function, whether it's an input/output pin, power pin, analog/digital pin, and any special features.
- Crystal Oscillators: Explanation of the crystal oscillators used with the ATmega328P to provide the clock signal, including the frequency ranges and their impact on the microcontroller's operation.
- ATmega328P Based Development Board Circuit
  - Circuit Diagram: A visual representation of the entire development board circuit, showing how each component is connected.
  - Schematic Diagram: A detailed schematic illustrating the electrical connections and components used in the development board.
  - USB to TTL Adapter:  Information on using a USB to TTL adapter for serial communication between the development board and a computer.
  - USBASP: Details about the USBASP programmer, used for uploading code to the ATmega328P microcontroller.

## Development Board Circuit

- Schematic: The schematic diagram of the development board, showing the layout and connections of components.
- Routing: Details on the routing of electrical traces on the PCB, ensuring efficient and error-free connections between components.
- Clearances: Information on the spacing between traces, pads, and other features to prevent short circuits and ensure reliable operation.
- Text Command in EAGLE Software: Instructions on how to add text labels and annotations in the EAGLE PCB design software.
- Gerber File: Gerber files generated for PCB manufacturing, including the different layers and their purposes.
- Copper Top: The layout of the top copper layer of the PCB, showing the traces and pads on the top side.
- Copper Bottom: The layout of the bottom copper layer of the PCB, showing the traces and pads on the bottom side.
- Silkscreen Top: The top silkscreen layer, used for adding labels, component outlines, and other markings on the top side of the PCB.
- Silkscreen Bottom: The bottom silkscreen layer, used for adding labels, component outlines, and other markings on the bottom side of the PCB.

## Audio Amplifier

- Introduction: Overview of the audio amplifier circuit, its purpose, and applications.
- Circuit Diagram: The schematic diagram of the audio amplifier, showing the connections and components used.
- Components Required: A list of all components needed to build the audio amplifier circuit.
- Working: Explanation of how the audio amplifier circuit functions, including the signal flow and amplification process.
- Schematic: Detailed schematic of the audio amplifier circuit.
- Layout: PCB layout for the audio amplifier, showing the placement of components and routing of traces.

## LED Blinking

## Clap Switch Using 555 Timer and BC-547 Transistors

- Required Components: A list of all components needed to build the clap switch circuit, including the 555 timer IC and BC-547 transistors.
- Working Principle: Explanation of how the clap switch circuit operates, including the role of the 555 timer and transistors.
- Circuit Diagram: The schematic diagram of the clap switch circuit, showing the connections and components used.

## Ultrasonic Sensor

- Components Required: A list of all components needed to build the ultrasonic sensor circuit.
- Working Principle: Explanation of how the ultrasonic sensor functions, including how it measures distance using sound waves.

## Our Errors and How We Overcame Them

1. Failed to Upload Code from Arduino Using USBasp
2. Failed to Implement Clap Switch Circuit on Breadboard
3. Problems Faced During Routing
4. Failed to Simulate Ultrasonic Sensor on Proteus

## Acknowledgement

We’d like to acknowledge the invaluable guidance and support provided by our mentors throughout the process of designing the PCB for this project. Their expertise and insights were instrumental in shaping the project’s success. Additionally, we are grateful to the Drishti Club for providing a platform that fostered collaborative learning and allowed us to delve into the world of PCB designing.

---

## License

This project is licensed under the MIT License - see the LICENSE file for details.
