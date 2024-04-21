# Chapter 1: Introduction

## 1.1 Problem Description

The micro-mouse project aims to design and construct subassemblies for a simplified maze-solving robot. The project is divided into four modules: processor, motherboard, sensing, and power. Working in pairs, each student is responsible for designing either the sensing or power subsystem. The objective is to create a functional micro-mouse that navigates a maze while adhering to a strict budget and meeting the specified requirements for each subsystem. The sensing subsystem, which is the focus of this report, plays a crucial role in detecting obstacles and walls, enabling the micro-mouse to navigate the maze effectively.

## 1.2 Scope and Limitations

The scope of this project is limited to the design and implementation of the sensing subsystem for the micro-mouse robot. The subsystem will include obstacle detection sensors, power-saving features, and the necessary code to interface with the processor board. The design will cover the integration of the sensing subsystem with the other modules and the overall navigation algorithm for the micro-mouse, which will be discussed in the System Integration and Interfacing section.

The project's limitations include the strict budget constraints, which may impact component selection and design choices. Additionally, the sensing subsystem's performance may be affected by factors such as sensor accuracy, ambient light conditions, and battery life. Testing and development may also be limited by the availability of resources and time constraints.

## 1.3 GitHub Link

https://github.com/username/micromouse-sensing-subsystem

# Chapter 2: Requirements Analysis

## 2.1 Requirements

Table 2.1: User and functional requirements of the sensing subsystem.

| Requirement ID | Description                                                                                                                                                   |
| -------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| UR-01          | The sensing subsystem should detect walls in front and on the sides of the micro-mouse.                                                                       |
| UR-02          | The sensing subsystem should consume minimal power to maximize battery life.                                                                                  |
| UR-03          | The sensing subsystem should be reliable and consistently detect walls.                                                                                       |
| FR-01          | The sensing subsystem must include sensors capable of detecting walls within a suitable range for maze navigation.                                            |
| FR-02          | The sensing subsystem must use a power-saving mechanism to reduce overall power consumption.                                                                  |
| FR-03          | The sensing subsystem must communicate wall detection data to the processor board through the state of the LEDs.                                              |
| FR-04          | The sensing subsystem must fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard.                   |
| FR-05          | The sensing subsystem must include software that processes sensor data and determines the presence of walls on the left, right, and front of the micro-mouse. |

## 2.2 Specifications

Table 2.2: Specifications of the sensing subsystem derived from the requirements in Table 2.1.

| Specification ID | Description                                                                                                                                           |
| ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| SPEC-01          | The sensing subsystem shall detect walls within a range suitable for the micro-mouse maze navigation, with a block in the maze being 200mm x 200mm.   |
| SPEC-02          | The sensing subsystem shall use a power-saving mechanism that significantly reduces power consumption compared to continuous operation.               |
| SPEC-03          | The sensing subsystem shall use the processor board's LEDs to indicate the presence of walls, with one LED each for the left, right, and front walls. |
| SPEC-04          | The sensing subsystem PCB shall fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard.      |
| SPEC-05          | The sensing subsystem software shall process sensor data and determine the presence of walls.                                                         |

## 2.3 Testing Procedures

Table 2.3: Summary of the testing procedures detailed in Chapter 4.

| Acceptance Test ID | Description                                                                                                                                              |
| ------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------- |
| AT-01              | Verify that the sensing subsystem detects walls within the suitable range for maze navigation.                                                           |
| AT-02              | Verify that the sensing subsystem reduces power consumption using a power-saving mechanism compared to continuous operation.                             |
| AT-03              | Verify that the sensing sub  system communicates wall detection data to the processor board through the state of the LEDs.                               |
| AT-04              | Verify that the sensing subsystem PCB fits within the available space on the micro-mouse chassis and connects to the 2x14 pin header on the motherboard. |
| AT-05              | Verify that the sensing subsystem software processes sensor data and determines the presence of walls on the left, right, and front of the micro-mouse.  |

## 2.4 Traceability Analysis

Table 2.4: Requirements Traceability Matrix

| #   | Requirements | Specifications   | Acceptance Test |
| --- | ------------ | ---------------- | --------------- |
| 1   | UR-01        | SPEC-01          | AT-01           |
| 2   | UR-02        | SPEC-02          | AT-02           |
| 3   | UR-03        | SPEC-03, SPEC-05 | AT-03, AT-05    |
| 4   | FR-01        | SPEC-01          | AT-01           |
| 5   | FR-02        | SPEC-02          | AT-02           |
| 6   | FR-03        | SPEC-03          | AT-03           |
| 7   | FR-04        | SPEC-04          | AT-04           |
| 8   | FR-05        | SPEC-05          | AT-05           |

### 2.4.1 Traceability Analysis 1

UR-01 is satisfied by SPEC-01, which states that the sensing subsystem shall detect walls within a range suitable for micro-mouse maze navigation, with a block in the maze being 200mm x 200mm. This requirement is verified by AT-01, where the micro-mouse is placed in a controlled environment with walls at various distances and orientations to ensure that the sensing subsystem consistently detects walls within the suitable range.

### 2.4.2 Traceability Analysis 2

UR-02 is satisfied by SPEC-02, which states that the sensing subsystem shall use a power-saving mechanism that significantly reduces power consumption compared to continuous operation. This requirement is verified by AT-02, where the power consumption of the sensing subsystem is measured with the power-saving mechanism enabled and disabled, and the results are compared to ensure that the power consumption with the power-saving mechanism enabled is significantly lower than with it disabled.

### 2.4.3 Traceability Analysis 3

UR-03 is satisfied by SPEC-03 and SPEC-05. SPEC-03 states that the sensing subsystem shall use the processor board's LEDs to indicate the presence of walls, with one LED each for the left, right, and front walls. SPEC-05 states that the sensing subsystem software shall process sensor data and determine the presence of walls. These requirements are verified by AT-03 and AT-05, respectively. AT-03 checks if the corresponding LEDs illuminate when walls are detected, effectively communicating the wall detection data to the processor board. AT-05 verifies that the sensing subsystem software accurately determines the presence of walls based on the sensor data.

### 2.4.4 Traceability Analysis 4

FR-01 is satisfied by SPEC-01, which states that the sensing subsystem shall detect walls within a range suitable for the micro-mouse maze navigation, with a block in the maze being 200mm x 200mm. This requirement is verified by AT-01, where the micro-mouse is placed in a controlled environment with walls at various distances and orientations to ensure that the sensing subsystem consistently detects walls within the suitable range.

### 2.4.5 Traceability Analysis 5

FR-02 is satisfied by SPEC-02, which states that the sensing subsystem shall use a power-saving mechanism that significantly reduces power consumption compared to continuous operation. This requirement is verified by AT-02, where the power consumption of the sensing subsystem is measured with the power-saving mechanism enabled and disabled, and the results are compared to ensure that the power consumption with the power-saving mechanism enabled is significantly lower than with it disabled.

### 2.4.6 Traceability Analysis 6

FR-03 is satisfied by SPEC-03, which states that the sensing subsystem shall use the processor board's LEDs to indicate the presence of walls, with one LED each for the left, right, and front walls. This requirement is verified by AT-03, where the micro-mouse is placed in a controlled environment with walls on the left, right, and front, and the LED indicators are observed to ensure that the corresponding LEDs illuminate when walls are detected, effectively communicating the wall detection data to the processor board.

### 2.4.7 Traceability Analysis 7

FR-04 is satisfied by SPEC-04, which states that the sensing subsystem PCB shall fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard. This requirement is verified by AT-04, where the sensing subsystem PCB is assembled onto the micro-mouse chassis and checked for proper fit and connection to ensure that it fits within the available space without interference and securely connects to the 2x14 pin header.

### 2.4.8 Traceability Analysis 8

FR-05 is satisfied by SPEC-05, which states that the sensing subsystem software shall process sensor data and determine the presence of walls. This requirement is verified by AT-05, where the micro-mouse is placed in a controlled environment with walls on the left, right, and front, and the sensor data and wall presence indicators are monitored to ensure that the sensing subsystem software accurately determines the presence of walls based on the sensor data.

# Chapter 3: Subsystem Design

## 3.1 Design Decisions

### 3.1.1 Final Design

![[Screenshot 2024-04-18 200731.png]]

![[Screenshot 2024-04-17 222953.png]]

![[Screenshot 2024-04-17 223008.png]]

![[Screenshot 2024-04-17 223117.png]]

![[Screenshot 2024-04-17 204755.png]]

---
## 3.1 Design Decisions

### 3.1.1 Component Selection

| Component         | Options Considered                     | Pros                                                                                                                                                                           | Cons                                                                                                                                                                      | Final Selection                                   |
| ----------------- | -------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------- |
| IR Emitting Diode | - TSAL6100<br>- TSAL6200<br>- TSAL4400 | - Work well at 100mA current<br>- Suitable for desired sensing distance<br>- Low power consumption <br> - Familiarity with component TSAL6100 due to breadboard assignment     | - Limited stock availability on JLCPCB for TSAL6100 and TSAL6200 <br>- TSAL4400 is made to sense IR light from it top, unlike the side body for the TSAL6100 and TSAL6200 | TSAL4400 <br>- Reason: Component availability     |
| Photodiode        | - SFH205FA<br>- SFH203PFA              | - Suitable for side-facing detection<br>- Works well with 100kΩ resistor in reverse bias configuration <br> - Familiarity with component SFH205FA due to breadboard assignment | - Limited stock availability on JLCPCB for SFH205FA <br>- SFH203 is made to sense IR light from it top, unlike the side body for the SFH205                               | SFH203PFA <br>- Reason: Component availability    |
| Phototransistor   | - QRD113<br>- QRD114                   | - Suitable for short-distance applications <br>- Good stock availability on JLCPCB                                                                                             | - Not suitable for long-distance sensing required in this project                                                                                                         | Not selected <br>- Reason: Component availability |


The TSAL4400 and SFH203PFA were chosen primarily due to their availability on JLCPCB, despite the limitations compared to the TSAL6100 and SFH205FA. The IR emitting diode and photodiode combination was preferred over phototransistors (QRD113 and QRD114) because of their proven performance in long-distance sensing during the breadboard assignment.

### 3.1.2 Power Saving Mechanism

Pulse Width Modulation (PWM) was selected to control the power supplied to the ER sensors, effectively reducing the overall power consumption of the sensing subsystem. This allows the ER sensors to operate for a shorter time while still functioning as intended, as long as the duty cycle is appropriately configured.

However, it is important to note that sourcing current directly from the GPIO pin may not be the best approach. A better solution would be to use a MOSFET switching circuit with PWM as the switch, and the circuit connected to the 3.7V battery for power. This would ensure that the GPIO pin is not overloaded and the ER sensors receive adequate current.

The appropriate duty cycle will be determined during testing when the PCB is received.

### 3.1.3 Output and Level Shifting

The analog output signals from the ER sensors need to be converted into a format that the processor can use to detect the presence of a wall and control an LED indicator. While an ADC could directly convert the analog signals for processing, a level shifting circuit offers a simpler solution. A level shifter translates signals between different voltage or logic levels, allowing the analog voltages from the ER sensors to be converted to digital levels compatible with the processor. This approach simplifies the interfacing between the sensing subsystem and the processor, enabling efficient wall detection and LED control without the need for a complex ADC solution.

| Design Decision | Options Considered                                                             | Pros                                                                                                                                                                                                 | Cons                                                              | Final Selection                            |
| --------------- | ------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------- | ------------------------------------------ |
| Level Shifting  | 1. NPN and PNP transistor-based level shifter<br>2. MOSFET-based level shifter | 1. Familiarity with transistors<br>- Easily sourced from White Lab if needed<br>- Less expensive than MOSFETs<br>2. No current drawn at the gate from ER sensor output<br>- Requires only one MOSFET | 1. Requires two transistors<br>2. More expensive than transistors | NPN and PNP transistor-based level shifter |

To ensure that the level-shifting circuit would work reliably with the ER sensor outputs, simulations were conducted using LT Spice. The input into the level shifter was varied, confirming that voltages less than 0.7V resulted in approximately 0V output, while voltages greater than 0.7V resulted in approximately 3.3V output. Additionally, the ER sensor's functionality had already been verified during the breadboard assignment.

### 3.1.4 PCB Layout and Routing

| Design Decision     | Description                                                                                                     | Rationale                                                                                                                                 |
| ------------------- | --------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| Component Placement | - ER sensors placed to avoid obstruction by wheels<br>- PCB extended forward to accommodate ER sensors          | - Ensure unobstructed wall detection on left and right sides<br>- Maintain compact PCB size while allowing proper ER sensor functionality |
| Routing             | - Tracks placed and routed for all components<br>- Ground plane not included on top and bottom layers (mistake) | - Ensure proper connectivity between components<br>- (Mistake) Thought tracks and routing would be sufficient without ground planes       |

In hindsight, not including a ground plane on both the front and back of the board was a mistake. Ground planes offer several benefits, such as reducing noise and EMI, enhancing power delivery, facilitating improved thermal management, and simplifying routing.


### 3.1.5 Unique Designs 
#### 1. Unique Design Decision 1: Analog to Digital Logic Converter

Instead of sending the analog output signal from the ER sensor directly to the processor for processing by the ADC, a level shifter was implemented to convert the analog signal to digital logic levels. The level shifter acts as an analog to digital logic converter, where voltages less than 0.7V produce a 0V output, and voltages greater than 0.7V produce a 3.3V output. This approach simplifies the interfacing between the sensing subsystem and the processor, as the processor can directly use the digital logic levels for wall detection.

#### 2. Unique Design Decision 2: PCB Shape Modification for Sensor Placement

The provided template for the sensing subsystem PCB design posed a challenge, as the left and right sensors would be obstructed by the wheels of the micromouse. To overcome this issue, the decision was made to extend the PCB forward just enough to ensure that the sensors were not obstructed. This modification required careful consideration to maintain the micromouse's ability to fit within one block of the maze and to minimize the impact on the center of gravity.

An alternative solution considered was to rotate the board to still obtain left and right wall data while avoiding wheel obstruction. However, this approach was deemed potentially more complicated than simply extending the board.

#### 3. Unique Design Decision 3: Jumper for Potentiometer Calibration

A jumper was included in the design to allow for the connection of a potentiometer. The potentiometer can be used to fine-tune the output of the ER sensor if calibration is needed. Although the potentiometer was not populated to reduce costs, it can be easily sourced from the White Lab if required. This design decision provides flexibility in adjusting the sensing subsystem's performance without the need for significant hardware modifications.


---

The final solution for the sensing subsystem consists of three main components:

1. Emitter-Receiver (ER) Sensor Subsystem: Three separate ER circuits for left, front, and right wall detection, each using a TSAL4400 IR emitting diode and an SFH203 photodiode.
2. Power Saving Mechanism: Pulse Width Modulation (PWM) is used to reduce power consumption by controlling the duty cycle of the ER circuits.
3. Output and Level Shifting: An NPN and PNP transistor-based level shifter is used to convert the output signals from the ER circuits to digital levels suitable for the GPIO pins of the STM32 processor.


## 3.2 Failure Management

Table 3.1: Failure management processes and their rationale.

| Failure Management Process              | Description                                                                                                 | Rationale                                                                                                                                                                                                                                                                                               |
| --------------------------------------- | ----------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Jumpers for debugging                   | Jumpers were placed at strategic locations on the PCB.                                                      | Jumpers allow for easy debugging and troubleshooting by providing access points to test and isolate different parts of the circuit. They could also be used as a means to place other components onto the PCB if needed.                                                                                |
| Test points for probing                 | Test points were included at critical nodes in the circuit.                                                 | Test points facilitate probing and measuring signals at various stages of the circuit, aiding in diagnosing issues and verifying correct operation.                                                                                                                                                     |
| Potentiometer jumper option             | A jumper option was included to allow the connection of a potentiometer in parallel with the 10kΩ resistor. | The potentiometer provides adjustability for fine-tuning the circuit if needed. It was not populated to reduce costs but can be sourced from the White Lab if required.                                                                                                                                 |
| Overcurrent protection                  | Current-limiting resistors were used in series with the emitter and other sensitive components.             | Current-limiting resistors help prevent damage to components due to excessive current, mitigating the risk of component failure.                                                                                                                                                                        |
| Decoupling capacitors (not implemented) | Decoupling capacitors could have been placed near IC power pins.                                            | Decoupling capacitors suppress high-frequency noise and stabilize the power supply, reducing the risk of erratic behavior or component failure due to power supply issues. This failure management process was later realized as a potential improvement but was not implemented in the current design. |

## 3.3 System Integration and Interfacing

Table 3.2: Interfacing specifications

| Interface | Description                                                              | Pinout/Output                                                                                                                                                                                  |
| --------- | ------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| I001      | PWM signal center the processor to control the center ER Subsystem power | - STM32(PE13) to PE13 Pins of ER Subsystem <br> - STM32(GND) to GND Pins of ER Subsystem                                                                                                       |
| I002      | PWM signal from the processor to control the left ER sensor power        | - STM32(PE15) to PE15 Pins of ER Subsystem <br> - STM32(GND) to GND Pins of ER Subsystem                                                                                                       |
| I003      | PWM signal from the processor to control the right ER sensor power       | - STM32(PE11) to PE11 Pins of ER Subsystem <br> - STM32(GND) to GND Pins of ER Subsystem                                                                                                       |
| I004      | Digital output from the center Level Shifting Subsystem to the processor | - STM32(3V3) to 3V3 Pin of center Level Shifting Subsystem <br> - STM32(PE11) to PE12 Pins of center Level Shifting Subsystem <br> - STM32(GND) to GND Pins of center Level Shifting Subsystem |
| I005      | Digital output from the left Level Shifting Subsystem to the processor   | - STM32(3V3) to 3V3 Pin of center Level Shifting Subsystem <br> - STM32(PE14) to PE14 Pins of left Level Shifting Subsystem <br> - STM32(GND) to GND Pins of left Level Shifting Subsystem     |
| I006      | Digital output from the right Level Shifting Subsystem to the processor  | - STM32(3V3) to 3V3 Pin of center Level Shifting Subsystem <br> - STM32(PE10) to PE10 Pins of center Level Shifting Subsystem <br> - STM32(GND) to GND Pins of center Level Shifting Subsystem |

# Chapter 4: Acceptance Testing

## 4.1 Tests

Table 4.1: Subsystem acceptance tests

| Test ID | Description                    | Testing Procedure                                                                                                                                                                                                                                                                                                                                                            | Pass/Fail Criteria                                                                                                                                                                                                                                                                                                                  |
| ------- | ------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| AT-01   | Front ER sensor wall detection | 1. Place the micro-mouse in front of a wall at various distances (e.g., 50mm, 100mm, 200mm). 2. Monitor the digital output voltage of the front ER sensor level shifter using an oscilloscope connected to the test point. 3. Verify the output voltage changes between 0V and 3.3V according to the wall distance.                                                          | Pass: The output voltage switches between 0V and 3.3V from the level shifter based on the wall distance, crossing a predefined threshold for wall detection. Fail: The output voltage does not change significantly with wall distance, or the threshold is not crossed.                                                            |
| AT-02   | Left ER sensor wall detection  | 1. Place the micro-mouse with a wall on its left side at various distances (e.g., 50mm, 100mm, 200mm). 2. Monitor the digital output voltage of the left ER sensor level shifter using an oscilloscope connected to the test point. 3. Verify the output voltage changes between 0V and 3.3V according to the wall distance.                                                 | Pass: The output voltage switches between 0V and 3.3V from the level shifter based on the wall distance, crossing a predefined threshold for wall detection. Fail: The output voltage does not change significantly with wall distance, or the threshold is not crossed.                                                            |
| AT-03   | Right ER sensor wall detection | 1. Place the micro-mouse with a wall on its right side at various distances (e.g., 50mm, 100mm, 200mm). 2. Monitor the digital output voltage of the right ER sensor level shifter using an oscilloscope connected to the test point. 3. Verify the output voltage changes between 0V and 3.3V according to the wall distance.                                               | Pass: The output voltage switches between 0V and 3.3V from the level shifter based on the wall distance, crossing a predefined threshold for wall detection. Fail: The output voltage does not change significantly with wall distance, or the threshold is not crossed.                                                            |
| AT-04   | PWM power control              | 1. Connect an oscilloscope to the PWM input of each ER sensor (front, left, right). 2. Vary the PWM duty cycle using the processor board. 3. Verify that the ER sensors function as intended at different PWM duty cycles.                                                                                                                                                   | Pass: The ER sensors function properly at various PWM duty cycles, indicating that the power-saving mechanism is working as expected. Fail: The ER sensors do not function properly at different PWM duty cycles, suggesting issues with the power-saving mechanism.                                                                |
| AT-05   | 3.3V power supply stability    | 1. Connect a voltage meter to the 3.3V power supply test point. 2. Monitor the voltage level while the micro-mouse is in operation, with all ER sensors active. 3. Verify that the voltage level remains within the acceptable range (e.g., 3.3V ± 5%).                                                                                                                      | Pass: The 3.3V power supply voltage remains within the acceptable range during operation. Fail: The voltage level deviates significantly from the acceptable range.                                                                                                                                                                 |
| AT-06   | Level shifting functionality   | 1. Connect an oscilloscope to the analog output of each ER sensor (front, left, right) and the corresponding digital output from the level shifter. 2. Place the micro-mouse in a controlled environment with walls at various distances. 3. Verify that the level shifter converts the analog output to the correct digital levels (0V or 3.3V) based on the wall distance. | Pass: The level shifter accurately converts the analog output to digital levels, with 0V representing no wall detected and 3.3V representing a wall detected. Fail: The level shifter does not correctly convert the analog output to digital levels, or the digital levels do not correspond to the presence or absence of a wall. |
