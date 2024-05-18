# EEE3088F Project Report

# Chapter 1
## Introduction

### 1.1 Problem Description

The micro-mouse project aims to design and construct subassemblies for a simplified maze-solving robot. The project is divided into four modules: processor, motherboard, sensing, and power. Working in pairs, each student is responsible for designing either the sensing or power subsystem. The objective is to create a functional micro-mouse that navigates a maze while adhering to a strict budget and meeting the specified requirements for each subsystem. The sensing subsystem, which is the focus of this report, plays a crucial role in detecting obstacles and walls, enabling the micro-mouse to navigate the maze effectively.

### 1.2 Scope and Limitations

The scope of this project is limited to the design and implementation of the sensing subsystem for the micro-mouse robot. The subsystem will be designed to detect obstacles and walls, incorporate power-saving features, and interface with the processor board. The sensing subsystem's design will cover its integration with the other modules. However, the overall navigation algorithm for the micro-mouse is beyond the scope of this project.

The project's limitations include the strict budget constraints, which may impact component selection and design choices. Additionally, the sensing subsystem's performance may be affected by factors such as sensor accuracy, ambient light conditions, and battery life. Testing and development may also be limited by the availability of resources and time constraints.


### 1.3 GitHub Link

[https://github.com/max035/EEE3088F-Micro-Mouse](https://github.com/max035/EEE3088F-Micro-Mouse)

# Chapter 2
## Requirements Analysis

### 2.1 Requirements

| Requirement ID | Description                                                                                                                                                    |
| -------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| R-01           | The sensing subsystem must include sensors capable of detecting walls within a suitable range for maze navigation                                              |
| R-02           | The sensing subsystem must provide reliable and consistent wall detection, mitigating the effects of ambient light on detection accuracy.                      |
| R-03           | The sensing subsystem must include software that processes the sensor data, indicating the presence of walls on the left, right, and front of the micro-mouse. |
| R-04           | The sensing subsystem must use a power-saving mechanism to reduce overall power consumption.                                                                   |
| R-05           | The sensing subsystem must fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard.                    |

## 2.2 Specifications

| Specification ID | Description                                                                                                                                                                                                                                                                                         |
| ---------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| SPEC-01          | The sensing subsystem shall detect walls on the left, right, and front of the micro-mouse, each with a detection range of 100mm to 200mm, conforming to the size of the maze block being 200mm x 200mm.                                                                                             |
| SPEC-02          | The sensing subsystem shall produce a consistent output voltage or voltage range that is minimally affected by environmental factors to ensure reliable wall detection.                                                                                                                             |
| SPEC-03          | The sensing subsystem shall include software that reads and interprets sensor data sent by the sensors' output to indicate the presence of walls on the left, right, and front of the micro-mouse, by toggling the PB7, PB5, and PB6 LEDs of the microcontroller, respectively.                     |
| SPEC-04          | The sensing subsystem shall use a power-saving mechanism that reduces power consumption to 50% or lower compared to standard continuous operation.                                                                                                                                                  |
| SPEC-05          | The sensing subsystem PCB shall fit within the available space on the micro-mouse chassis, with a width less than 70mm (from one wheel to the next) and a length greater than 6mm to accommodate the 2x14 connector and less than 50mm to ensure the micro-mouse can navigate the maze effectively. |
### 2.3 Testing Procedures 

| Acceptance Test ID | Description                                                                                                                                                                  |
| ------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| AT-01              | Verify that the ER subsystems can detect walls within the specified range of 100mm to 200mm.                                                                                 |
| AT-02              | Test the consistency of the sensing subsystem's output voltage under varying environmental conditions using the analog to digital logic converter.                           |
| AT-03              | Verify that the sensing subsystem software processes sensor data and indicates the presence of walls by toggling the corresponding LEDs on the microcontroller.              |
| AT-04              | Test the power consumption of the sensing subsystem to verify that the PWM power-saving mechanism reduces power consumption by 50% or more compared to continuous operation. |
| AT-05              | Ensure that the sensing subsystem PCB fits within the specified dimensions and connects properly to the 2x14 pin header on the motherboard.                                  |


### 2.4 Traceability Analysis - I'm coming back, Do Acceptance Testing table first

### 2.4 Traceability Analysis

| #   | Requirements | Specifications   | Acceptance Test |
| --- | ------------ | ---------------- | --------------- |
| 1   | R-01         | SPEC-01          | AT-01           |
| 2   | R-02         | SPEC-02          | AT-02           |
| 3   | R-03         | SPEC-03          | AT-03           |
| 4   | R-04         | SPEC-04          | AT-04           |
| 5   | R-05         | SPEC-05          | AT-05           |

#### Traceability Analysis 1
R-01 is satisfied by SPEC-01, which states that the sensing subsystem shall detect walls on the left, right, and front of the micro-mouse, each with a detection range of 100mm to 200mm, conforming to the size of the maze block being 200mm x 200mm. This requirement is verified by AT-01, where the ER subsystems are tested to ensure they can detect walls within the specified range.

#### Traceability Analysis 2
R-02 is satisfied by SPEC-02, which states that the sensing subsystem shall produce a consistent output voltage or voltage range that is minimally affected by environmental factors to ensure reliable wall detection. This requirement is verified by AT-02, which tests the consistency of the sensing subsystem's output voltage under varying environmental conditions using the analog to digital logic converter.

#### Traceability Analysis 3
R-03 is satisfied by SPEC-03, which states that the sensing subsystem shall include software that reads and interprets sensor data sent by the sensors' output to indicate the presence of walls on the left, right, and front of the micro-mouse, by toggling the PB7, PB5, and PB6 LEDs of the microcontroller, respectively. This requirement is verified by AT-03, which checks that the sensing subsystem software processes sensor data and indicates the presence of walls by toggling the corresponding LEDs on the microcontroller.

#### Traceability Analysis 4
R-04 is satisfied by SPEC-04, which states that the sensing subsystem shall use a power-saving mechanism that reduces power consumption to 50% or lower compared to standard continuous operation. This requirement is verified by AT-04, which tests the power consumption of the sensing subsystem to verify that the PWM power-saving mechanism reduces power consumption by 50% or more compared to continuous operation.

#### Traceability Analysis 5
R-05 is satisfied by SPEC-05, which states that the sensing subsystem PCB shall fit within the available space on the micro-mouse chassis, with a width less than 70mm (from one wheel to the next) and a length greater than 6mm to accommodate the 2x14 connector and less than 50mm to ensure the micro-mouse can navigate the maze effectively. This requirement is verified by AT-05, which ensures that the sensing subsystem PCB fits within the specified dimensions and connects properly to the 2x14 pin header on the motherboard.

# Chapter 3
## Subsystem Design

### 3.1 Design Decisions

The design decisions for the sensing subsystem were made based on careful consideration of component options, power-saving mechanisms, output and level shifting, and PCB layout and routing.

#### 3.1.1 Component Selection

| Component                                  | Options Considered                     | Pros                                                                                                                                                                                                                        | Cons                                                                                                                                                                      | Final Selection                                                                                                 |
| ------------------------------------------ | -------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------- |
| IR Emitting Diode(for Emitting Circuit)    | - TSAL6100<br>- TSAL6200<br>- TSAL4400 | - All work well at 100mA current, consuming less power<br>- All suitable for desired sensing distance (noted during breadboard assignment with TSAL6100)<br>- Familiarity with TSAL6100 due to breadboard assignment        | - Limited stock availability on JLCPCB for TSAL6100 and TSAL6200<br>- TSAL4400 is designed to sense IR light from its top, unlike the side body for TSAL6100 and TSAL6200 | TSAL4400 - Reason: Component availability                                                                       |
| Photodiode(for Receiving Circuit)          | - SFH205FA<br>- SFH203PFA              | - Suitable for side-facing detection<br>- Both work well (producing a sensitive output to reflected IR light) with 100kΩ resistor in reverse bias configuration<br>- Familiarity with SFH205FA due to breadboard assignment | - Limited stock availability on JLCPCB for SFH205FA<br>- SFH203PFA is designed to sense IR light from its top, unlike the side body for SFH205FA                          | SFH203PFA - Reason: Component availability                                                                      |
| Phototransistor (Emitter Receiver circuit) | - QRD113<br>- QRD114                   | - Suitable for short-distance applications (noted during breadboard assignment)<br>- Good stock availability on JLCPCB                                                                                                      | - Not suitable for long-distance sensing required in this project                                                                                                         | Not selected - Reason: Component availability and inability to meet project specification of measuring distance |
Due to limited stock availability on JLCPCB, the TSAL4400 and SFH203PFA were used instead of the initially selected TSAL6100 and SFH205FA. This change in component selection was made later in the project, and as a result, the calculations and assumptions throughout the report are based on the TSAL6100 and SFH205FA. This oversight in considering component availability from the beginning was a critical mistake in the approach and has been noted. However, since the TSAL4400 and SFH203PFA belong to the same component family as the initially selected components, they are functionally similar enough to ensure the project's success.

Ultimately, the IR emitting diode and photodiode (emitter-receiver) combination was preferred over phototransistors (QRD113 and QRD114) due to their demonstrated performance in long-distance sensing during the breadboard assignment.

##### Calculations

**Emitter Circuit Calculations** 
From the datasheet for the TSAL6100, we see:
- Voltage drop, $V_{f} = 1.5V$
- Typical current of the emitting diode is 100mA

For the emitter to function properly, it needs to be in series with a resistor that will provide its optimal current of 100mA. $$V_{in} - V_{f} - IR = 0$$ $$V_{in} - V_{f} = IR$$ $$R = \frac{V_{in} - V_{f}}{I} = \frac{3.3 - 1.5}{100mA} = 18\Omega$$

**Receiver Circuit Calculations** The resistor value for the receiver cannot be calculated directly but was determined experimentally during the breadboard assignment. With the photodiode functioning in reverse bias, using very large resistor values produced an output voltage large and sensitive enough for use.

- A $10k\Omega$ resistor produced outputs in the 100s millivolt region (no obstacle), and as the obstacle approached, the output would only increase significantly to around 3V.
- A $100k\Omega$ resistor produced outputs above 1V with no obstacle, and as the obstacle came closer, there was a gradual and clear voltage increase to 3.3V.

Therefore, the resistor used in series with the SFH205FA photodiode will be a $100k\Omega$ resistor.
#### Unique Designs

##### Unique Design Decision 1: Analog to Digital Logic Converter

After obtaining the analog output signal from the emitter-receiver (ER) sensor, the next step was to process and interpret this data for wall detection. One approach to this problem is to send the analog signal directly to the processor for processing using an Analog-to-Digital Converter (ADC). However, implementing an ADC system can be complex and resource-intensive, requiring additional software development and processing power.

To simplify the interfacing between the sensing subsystem and the processor, an alternative approach was chosen. Instead of using an ADC, a level shifter was implemented to convert the analog signal to digital logic levels. The level shifter acts as an analog to digital logic converter, where voltages less than 0.7V produce a 0V output, and voltages greater than 0.7V produce a 3.3V output.

This design decision offers several advantages:

1. Simplified interfacing: The processor can directly use the digital logic levels for wall detection, eliminating the need for complex ADC implementation and signal processing.

2. Reduced software complexity: By avoiding the ADC system, the software development effort is reduced, as the processor can directly interpret the digital logic levels for wall detection.

3. Resource optimization: The level shifter approach conserves processing power and memory resources that would otherwise be required for ADC signal processing, allowing for a more efficient use of the available resources.

By employing a level shifter as an analog to digital logic converter, the sensing subsystem can effectively provide wall detection information to the processor in a simplified and resource-efficient manner. This design decision streamlines the integration of the sensing subsystem with the processor, contributing to the overall functionality and performance of the micro-mouse.

![Schematic](Figures/EEE3088/Level%20Shifting%20Circuit.png)

##### Unique Design Decision 2: PCB Shape Modification for Sensor Placement

The provided template for the sensing subsystem PCB design posed a challenge, as the left and right sensors would be obstructed by the wheels of the micromouse. To overcome this issue, the decision was made to extend the PCB forward just enough to ensure that the sensors were not obstructed. This modification was necessary to prevent the sensors from being blocked by the wheels of the micromouse, which would hinder their ability to detect walls effectively. The extension was carefully designed to maintain the micromouse's ability to fit within one block of the maze and to minimize the impact on the centre of gravity.

![Schematic](Figures/EEE3088/layout.png)

An alternative solution considered was to rotate the sensors themselves, rather than modifying the PCB shape, to achieve the desired sensing angles while avoiding wheel obstruction. However, this approach was deemed potentially more complicated than simply extending the board, for several reasons:

1. Rotating the sensors would have required additional mechanical fixtures to secure them at the desired angles, increasing the complexity of the assembly process.

2. The rotated sensors might not have provided reliable sensory data from the sides of the micro-mouse, as the wheels could still obstruct the sensors' field of view.

3. Processing the sensory data from the rotated sensors would have necessitated the use of an Analog-to-Digital Converter (ADC) to interpret the signals and determine the presence of walls on the left and right sides of the micro-mouse. This approach would have significantly increased the complexity of the sensing subsystem, requiring additional software development and signal processing.

By extending the PCB forward, the sensors can be placed in front of the wheels without the need for rotation, ensuring unobstructed detection of walls on the left, right, and front of the micro-mouse. This design choice simplifies the assembly process, enhances the reliability of the sensory data, and eliminates the need for complex signal processing using an ADC.

The modified PCB shape not only accommodates the sensor placement but also optimizes the overall functionality and efficiency of the sensing subsystem, contributing to the successful navigation of the micro-mouse through the maze.

##### Unique Design Decision 3: Jumper for Potentiometer Calibration

In the sensing subsystem, the emitter-receiver (ER) sensor's output can be affected by various factors such as ambient light, sensor tolerance, and surface reflectivity. These factors can lead to variations in the analog output signal, potentially impacting the performance of the level shifter and the overall wall detection accuracy. To address this issue, calibration of the ER sensor's output may be necessary to ensure optimal performance.

To facilitate calibration, a jumper was included in the design to allow for the connection of a potentiometer. The potentiometer can be used to fine-tune the output of the ER sensor, enabling the level shifter to work effectively by providing a means to adjust the sensor output. This decision was made to offer flexibility in calibrating the sensing subsystem without requiring significant hardware modifications.

Although the potentiometer was not populated initially to reduce costs, it can be easily sourced from the White Lab if required. The jumper provides a convenient way to connect the potentiometer when calibration is needed, allowing for quick and easy adjustments to the ER sensor's output.

An alternative approach considered was to place jumpers to the resistors and use them for voltage division fine-tuning. However, this would have been more work than simply placing a potentiometer, as it would require managing multiple jumper configurations and calculating the appropriate resistor values for each calibration setting.

The jumper and potentiometer solution was chosen as it offers several advantages:

1. Flexibility: The potentiometer allows for continuous and precise adjustment of the ER sensor's output, enabling fine-tuning of the calibration to achieve optimal performance.

2. Simplicity: The jumper provides a straightforward means to connect the potentiometer when needed, without requiring complex hardware modifications or jumper configurations.

3. Cost-effectiveness: By not populating the potentiometer initially, the cost of the sensing subsystem is reduced, while still providing the option for calibration if necessary.

By incorporating a jumper for potentiometer calibration, the sensing subsystem gains the ability to adapt to varying environmental conditions and sensor characteristics, ensuring reliable wall detection performance. This design decision demonstrates a balance between flexibility, simplicity, and cost-effectiveness in addressing the potential need for calibration in the sensing subsystem.
#### Final Design

##### Power Saving Mechanism

Pulse Width Modulation (PWM) was selected to control the power supplied to the ER sensors, effectively reducing the overall power consumption of the sensing subsystem. This allows the ER sensors to operate for a shorter time while still functioning as intended, as long as the duty cycle is appropriately configured.

However, it is important to note that sourcing current directly from the GPIO pin may not be the best approach. A better solution would be to use a MOSFET switching circuit with PWM as the switch, and the circuit connected to the 3.7V battery for power. This would ensure that the GPIO pin is not overloaded, and the ER sensors receive adequate current.

![Current Implementation of PWM (without MOSFET Switching)](Figures/EEE3088/PWM%20-%20current%20and%20ER%20Subsystem.png)

![[PWM - Improved (2).png]]
The appropriate duty cycle will be determined during testing when the PCB is received.


##### Output and Level Shifting

The analog output signals from the ER sensors need to be converted into a format that the processor could use to detect the presence of a wall and control an LED indicator. While an ADC could directly convert the analog signals for processing, a level shifting circuit offered a simpler solution. A level shifter translates signals between different voltage or logic levels, allowing the analog voltages from the ER sensors to be converted to digital levels compatible with the processor. This approach simplifies the interfacing between the sensing subsystem and the processor, enabling efficient wall detection and LED control without the need for a complex ADC solution.

| Design Decision | Options Considered                                                           | Pros                                                                                                                                                                                                                                           | Cons                                                                                           | Final Selection                                                                                        |
| --------------- | ---------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------ |
| Level Shifting  | - NPN and PNP transistor-based level shifter<br>- MOSFET-based level shifter | - Familiarity with transistors for transistor-based option<br>- Transistors are easily sourced from White Lab if needed<br>- Transistors are less expensive than MOSFETs <br>- No current drawn at the gate from ER sensor output (for MOSFET) | - Requires two transistors (for NPN and PNP)<br>- More expensive than transistors (for MOSFET) | NPN and PNP transistor-based level shifter <br> Reasoning: <br> Component familiarity and availability |

To ensure that the level-shifting circuit would work reliably with the ER sensor outputs, simulations were conducted using LT Spice. The input into the level shifter was varied, confirming that voltages less than 0.7V resulted in approximately 0V output, while voltages greater than 0.7V resulted in approximately 3.3V output. Additionally, the ER sensor's functionality had already been verified during the breadboard assignment.

##### PCB Layout and Routing

| Design Decision     | Description                                                                                                                      | Rationale                                                                                                                                                                             |
| ------------------- | -------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Component Placement | - ER sensors placed to avoid obstruction by wheels<br>- PCB extended forward to accommodate ER sensors                           | - Ensure unobstructed wall detection on left and right sides<br>- Maintain compact PCB size while allowing proper ER sensor functionality                                             |
| Routing             | - Tracks (of width 0.2mm) placed and routed for all components<br>- Ground plane not included on top and bottom layers (mistake) | - Ensure proper connectivity between components, and able to handle current up to 1.4A if needed<br>- (Mistake) Assumed tracks and routing would be sufficient without ground planes |

In hindsight, not including a ground plane on both the front and back of the board was a mistake. Ground planes offer several benefits, such as reducing noise and EMI, enhancing power delivery, facilitating improved thermal management, and simplifying routing.

![Current Implementation of PCB layout (without ground planes)](Figures/EEE3088/PCB%20top.png)

![Better implementation of PCB layout (with ground planes)](Figures/EEE3088/PCB%20bottom.png)

##### Final solution

The final solution for the sensing subsystem consists of three main components:

1. Emitter-Receiver (ER) Sensor Subsystem: Three separate ER circuits for left, front, and right wall detection, each using a TSAL4400 IR emitting diode and an SFH203 photodiode.
2. Power Saving Mechanism: Pulse Width Modulation (PWM) is used to reduce power consumption by controlling the duty cycle of the ER circuits.
3. Output and Level Shifting: An NPN and PNP transistor-based level shifter is used to convert the output signals from the ER circuits to digital levels suitable for the GPIO pins of the STM32 processor.

![Schematic](Figures/EEE3088/schematic%20with%20labels.png)

![PCB Front](Figures/EEE3088/front%20PCB.png)

![PCB Back](Figures/EEE3088/back%20PCB.png)

![PCB 3D](Figures/EEE3088/3D%20PCB.png)

### Failure Management

| Failure Management Process  | Description                                                                                                 | Rationale                                                                                                                                                                                                                       |
| --------------------------- | ----------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Jumpers for debugging       | Jumpers were placed at strategic locations on the PCB.                                                      | - Jumpers allow for easy debugging and troubleshooting by providing access points to test and isolate different parts of the circuit.<br>- They could also be used as a means to place other components onto the PCB if needed. |
| Test points for probing     | Test points were included at critical nodes in the circuit.                                                 | - Test points facilitate probing and measuring signals at various stages of the circuit, aiding in diagnosing issues and verifying correct operation.                                                                           |
| Potentiometer jumper option | A jumper option was included to allow the connection of a potentiometer in parallel with the 10kΩ resistor. | - The potentiometer provides adjustability for fine-tuning the circuit if needed.<br>- It was not populated to reduce costs but can be sourced from the White Lab if required.                                                  |


### System Integration and Interfacing

| Interface | Description                                                              | Pinout/Output                                                                                                                                                                                                                       |
| --------- | ------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| I001      | PWM signal from the processor to control the center ER Subsystem power   | - STM32(PE13) to Pin 12 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pin (on the 2x14 Connector) of the Sensing Subsystem                                                                                |
| I002      | PWM signal from the processor to control the left ER sensor power        | - STM32(PE15) to Pin 8 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pin (on the 2x14 Connector) of the Sensing Subsystem                                                                                 |
| I003      | PWM signal from the processor to control the right ER sensor power       | - STM32(PE11) to Pin 16 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pin (on the 2x14 Connector) of the Sensing Subsystem                                                                                |
| I004      | Digital output from the center Level Shifting Subsystem to the processor | - STM32(3V3) to 3V3 Pin (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(PE11) to Pin 14 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pins (on the 2x14 Connector) of the Sensing Subsystem   |
| I005      | Digital output from the left Level Shifting Subsystem to the processor   | - STM32(3V3) to 3V3 Pin (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(PE14) to to Pin 10 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pin (on the 2x14 Connector) of the Sensing Subsystem |
| I006      | Digital output from the right Level Shifting Subsystem to the processor  | - STM32(3V3) to 3V3 Pin (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(PE10) to to Pin 18 (on the 2x14 Connector) of the Sensing Subsystem<br>- STM32(GND) to GND Pin (on the 2x14 Connector) of the Sensing Subsystem |
Note:
- Any one of the following pins on the 2x14 Connector of the Sensing Subsystem can be used as ground: Pin 3, Pin 9, Pin 15, Pin 21, or Pin 27. Only one GND pin needs to be connected.
- Any one of the following pins on the 2x14 Connector of the Sensing Subsystem can be used as a 3V3 supply: Pin 2 or Pin 28. Only one 3V3 pin needs to be connected.


![[Untitled Diagram.drawio (1).png]]

## Acceptance Testing

### Tests

| Test ID | Description                                                                                                                                                                                                                                                                                                                                                                      | Testing Procedure                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | Pass/Fail Criteria                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| ------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| AT-01   | Functionality test of the ER subsystems to verify that the sensors can detect walls within the specified range of 100mm to 200mm. This test ensures that the sensing subsystem meets the detection range requirements.                                                                                                                                                           | 1. Visually inspect the PCB for any manufacturing defects, poor soldering,  or damaged components (a general inspection).<br>2. Power on the sensing subsystem and verify that the IR emitters are functioning by viewing them through a camera or smartphone camera. The IR light should be visible on the camera display.<br>3. Set up the micro-mouse in a controlled environment with adjustable walls.<br>4. Place a wall at distances of 100mm, 150mm, and 200mm from each sensor (front, left, and right) and verify that the sensor detects its presence by observing a significant change in the output voltage at the corresponding test points (TP4, TP2, and TP6, respectively) compared to the no-obstacle condition.                                      | Pass: The PCB passes visual inspection, the IR emitters function correctly, and all ER subsystems detect the presence of walls at distances of 100mm, 150mm, and 200mm, as indicated by a significant change in output voltage at the corresponding test points compared to the no-obstacle condition.<br>Fail: The PCB fails visual inspection, the IR emitters do not function, or one or more ER subsystems fail to detect the presence of walls at any of the specified distances, with no significant change in output voltage compared to the no-obstacle condition. |
| AT-02   | Consistency test of the sensing subsystem's output voltage under varying environmental conditions (e.g., ambient light levels) using the analog to digital logic converter. This test verifies that the level shifter provides a consistent digital output (0V or 3.3V) based on the analog input, ensuring reliable wall detection minimally affected by environmental factors. | 1. Set up the micro-mouse in a controlled environment with a wall at a fixed distance (e.g., 150mm) from the front sensor.<br>2. Measure the analog output voltage at TP4 and the digital output voltage at TP8 under normal ambient light conditions.<br>3. Verify that the level shifter output at TP8 is approximately 3.3V when the analog voltage is above 0.7V and 0V when the analog voltage is below 0.7V.<br>4. Vary the ambient light intensity (e.g., using a desk lamp or dimming the room lights) and repeat steps 2-3, ensuring that the level shifter output remains consistent.<br>5. Repeat steps 2-4 for the left and right sensors, measuring the analog output voltage at TP2 and TP6, and the digital output voltage at TP7 and TP9, respectively. | Pass: The level shifters consistently provide the correct digital output (0V or 3.3V) based on the analog input from the ER subsystems, ensuring reliable wall detection minimally affected by environmental factors.<br>Fail: The level shifters fail to provide consistent digital outputs based on the analog input from the ER subsystems, or the digital outputs vary significantly with changes in ambient light levels, indicating unreliable wall detection.                                                                                                       |
| AT-03   | Functionality test of the sensing subsystem software to verify that it processes sensor data and indicates the presence of walls by toggling the corresponding LEDs (PB7, PB5, PB6) on the microcontroller. This test ensures that the software correctly interprets sensor data and communicates wall detection information.                                                    | 1. Set up the micro-mouse in a controlled environment with removable walls on the left, right, and front sides.<br>2. Place a wall on the left side of the micro-mouse and verify that PB7 LED toggles on.<br>3. Remove the left wall and verify that PB7 LED toggles off.<br>4. Repeat steps 2-3 for the right side wall and PB5 LED.<br>5. Repeat steps 2-3 for the front wall and PB6 LED.                                                                                                                                                                                                                                                                                                                                                                           | Pass: The LEDs (PB7, PB5, PB6) toggle correctly, indicating the presence or absence of walls on the left, right, and front sides, respectively.<br>Fail: One or more LEDs fail to toggle correctly based on the presence or absence of walls, indicating an issue with the sensing subsystem software.                                                                                                                                                                                                                                                                     |
| AT-04   | Power consumption test of the sensing subsystem to verify that the PWM power-saving mechanism reduces power consumption by 50% or more compared to continuous operation. This test ensures that the sensing subsystem meets the power efficiency requirements.                                                                                                                   | 1. Measure the current consumption of the sensing subsystem during continuous operation (100% duty cycle) using an ammeter.<br>2. Set the PWM duty cycle to 50% and measure the current consumption again.<br>3. Calculate the percentage reduction in power consumption.<br>4. Repeat steps 2-3 for duty cycles of 25% and 10%.<br>5. Verify that the sensing subsystem still functions correctly at the reduced duty cycles by performing a basic wall detection test.                                                                                                                                                                                                                                                                                                | Pass: The PWM power-saving mechanism reduces the current consumption of the sensing subsystem by 50% or more compared to continuous operation, and the sensing subsystem remains functional at the reduced duty cycles.<br>Fail: The PWM power-saving mechanism fails to reduce the current consumption by at least 50%, or the sensing subsystem does not function correctly at the reduced duty cycles.                                                                                                                                                                  |
| AT-05   | Physical compatibility test to ensure that the sensing subsystem PCB fits within the specified dimensions (width < 70mm, 6mm < length < 50mm) and connects properly to the 2x14 pin header on the motherboard. This test verifies that the sensing subsystem meets the size and connectivity requirements.                                                                       | 1. Measure the width of the sensing subsystem PCB at its widest point using a ruler or caliper.<br>2. Measure the length of the sensing subsystem PCB from the edge of the 2x14 pin header to the opposite end.<br>3. Verify that the width is less than 70mm and the length is between 6mm and 50mm.<br>4. Connect the sensing subsystem PCB to the 2x14 pin header on the motherboard, ensuring that all pins are properly aligned.<br>5. Gently tug on the sensing subsystem PCB to confirm that it is securely connected to the motherboard.                                                                                                                                                                                                                        | Pass: The sensing subsystem PCB has a width less than 70mm, a length between 6mm and 50mm, and connects securely to the 2x14 pin header on the motherboard.<br>Fail: The sensing subsystem PCB exceeds the specified dimensions or does not connect properly to the 2x14 pin header on the motherboard.                                                                                                                                                                                                                                                                    |
### Critical Analysis of Testing

#### AT-01: Functionality test of the ER subsystems
During the initial testing of the ER subsystems (AT-01), several issues were discovered that significantly impacted the system's performance. Firstly, incorrect resistor values were used for the emitter circuits (R1, R3, R5) and the receiver circuits (R2, R4, R6). The emitter circuits used 100Ω resistors instead of the calculated 18Ω value, while the receiver circuits used 10kΩ resistors instead of the intended 100kΩ. These incorrect values led to suboptimal current flow and signal reception.

Additionally, it was found that powering the ER subsystems directly from the GPIO pins was not a viable solution, as the STM32 datasheet specifies a maximum current of 25mA per pin, which is insufficient for the required 100mA current for the IR emitters. To address this issue, the connections to the GPIO pins (PE15, PE13, PE11) were severed, and the ER subsystems were connected to the 3.7V battery (BATT) via pins 4 and 26 on the 2x14 connector.

During testing, it was observed that the IR emitters produced a faint light, which was attributed to the use of the TSAL4400 model instead of the TSAL6100 used in the breadboard assignment. Furthermore, no definitive output was observed at test points TP4, TP2, and TP6 when varying the distance of an object from the sensors. Upon further investigation, it was discovered that the selected photodiode (SFH203PFA) had an upward sensing direction, which was not suitable for the intended side-sensing application.

To rectify these issues, all SFH203PFA photodiodes were replaced with the side-sensing SFH205FA model, and all TSAL4400 emitters were replaced with the brighter TSAL6100 model, both sourced from the White Lab. After these component replacements, the test was repeated, and the desired outputs were obtained: approximately 1.2V with no obstacle, 1.4V at 200mm, 1.7V at 150mm, and 2.2V at 100mm for all test points (TP4, TP2, TP6).

The successful passing of AT-01 after these modifications highlights the importance of using the correct component values and models, as well as ensuring proper power supply and sensing direction for optimal performance of the ER subsystems.

#### AT-02: Consistency test of the sensing subsystem's output voltage
During the consistency test of the sensing subsystem's output voltage (AT-02), it was observed that the analog output voltages from the ER subsystems were consistently above 1V, even with varying distances of the object from the sensors. Specifically, the measured voltages were approximately 1.2V with no obstacle, 1.4V at 200mm, 1.7V at 150mm, and 2.2V at 100mm for all test points (TP4, TP2, TP6).

These high analog voltages posed a problem for the level shifter, which was designed to work with a threshold of around 0.7V. The potentiometer included on the board was considered as a potential solution for adjusting the voltage levels. However, it was determined that this approach would not be robust enough to account for real-world fluctuations in ambient lighting conditions.

To address this issue, the decision was made to connect the analog outputs directly to the ADC pins of the microcontroller (PA4, PA5, PA6) via pins 7, 11, and 13 on the 2x14 connector. This modification required severing the connections to the level shifter and soldering wires from test points TP2, TP6, and TP7 to pins 7, 11, and 13, respectively.

By utilizing the ADC, it became possible to capture and interpret the analog voltages programmatically, allowing for the implementation of a range of values that the circuit can work with to account for variations in ambient light. This modification meant that AT-02 could no longer be passed in its original form, but it ultimately led to a more adaptable and robust solution for handling the analog output voltages from the ER subsystems.

#### AT-03: Functionality test of the sensing subsystem software
The change in approach from using a level shifter to an ADC necessitated significant modifications to the sensing subsystem software. Initially, the software was designed to receive digital outputs from the level shifter to toggle the LEDs (PB7, PB5, PB6) based on the presence or absence of a wall. However, with the ADC implementation, the software needed to be updated to read the analog values and determine the presence of a wall based on predefined thresholds.

To facilitate the calibration process, an LCD was added to display the ADC values corresponding to the sensor outputs. This allowed for real-time monitoring and adjustment of the threshold values for each ER subsystem (left, right, and front).

During testing, the micro-mouse was set up in a controlled environment, and the LEDs were initially checked for proper functionality. If an LED did not illuminate as expected, the corresponding ADC threshold value was recalibrated. The testing procedure involved iteratively adjusting the threshold values for each ER subsystem, which were read through ADC channels PA4, PA5, and PA6, while monitoring the LED states and the ADC values displayed on the LCD.

This iterative calibration process was continued until the LEDs consistently toggled on and off based on the presence or absence of walls at the defined threshold values. The successful passing of AT-03 after this calibration procedure demonstrates the effectiveness of the revised software design in interpreting the analog sensor data and accurately detecting the presence of walls.

#### AT-04: Power consumption test of the sensing subsystem
During the power consumption test (AT-04), it was discovered that sourcing PWM signals directly from the GPIO pins to control the power to the ER subsystems was not feasible due to current limitations. To overcome this challenge, a P-channel MOSFET was sourced from the White Lab and incorporated into the circuit.

The P-channel MOSFET was configured with its source connected to the 3.7V battery (BATT), and its gate connected to a PWM-capable pin (PE15) of the microcontroller, which corresponds to pin 8 on the 2x14 connector. The drain of the MOSFET was then used as the voltage source for the ER subsystems, with a voltage close to 3.7V.

Initial testing revealed that with all components connected (except for the level shifter), the current drawn by the system was approximately 295mA, close to the expected 300mA (100mA for each of the three ER subsystems). Adjusting the PWM frequency to 1Hz resulted in a noticeable reduction in power consumption while still providing sufficient time for the IR emitters to illuminate and be detected by the sensors. However, it was observed that the analog output voltages at test points TP4, TP2, and TP6 were also affected by the PWM signal.

To mitigate this issue, the decision was made to connect only the IR emitters to the PWM-controlled voltage source (drain of the P-channel MOSFET), while the receivers (photodiodes) were powered directly from the 3.7V battery (BATT). This approach made sense conceptually, as the emitters are the primary current-drawing components, whereas the photodiodes only draw current when receiving reflected IR light.

After implementing this modification, the testing procedure was repeated successfully, and a PWM duty cycle of 50% was selected as it provided an optimal balance between power savings and reliable wall detection, allowing sufficient time for the emitters to illuminate and the sensors to capture the reflected IR light.

#### AT-05: Physical compatibility test
The physical compatibility test (AT-05) focused on ensuring that the sensing subsystem PCB fits within the specified dimensions and connects properly to the motherboard. The length of the PCB was measured to be 54mm, which was deemed optimal for preventing sensor obstruction by the wheels while maintaining a compact overall design.

During testing, the PCB was successfully connected to the motherboard using the appropriate 2x14 2.54mm pin header, and all connections were verified to be secure. The test was passed, confirming that the sensing subsystem PCB meets the physical compatibility requirements for integration with the micro-mouse platform.

# Conclusion

The design and implementation of the sensing subsystem for the micro-mouse project presented numerous challenges and opportunities for learning and improvement. Through a systematic approach to problem-solving, a functional sensing subsystem was developed that met the project's requirements and specifications.

The results of the Acceptance Tests clearly demonstrated the importance of careful component selection, proper power management, and iterative software development in achieving a reliable and efficient sensing subsystem. The initial setbacks encountered during testing, such as incorrect component values and incompatible sensing directions, highlighted the need for thorough research and attention to detail in the design process. By addressing these issues through component replacements and circuit modifications, the sensing subsystem was able to successfully detect walls within the specified range and provide consistent output voltages.

The decision to transition from a level shifter to an ADC for processing the analog sensor data proved to be a turning point in the project. This modification not only simplified the interfacing between the sensing subsystem and the processor but also provided greater flexibility in handling variations in ambient light conditions. The success of this approach was evident in the results of AT-03, which demonstrated the effectiveness of the revised software design in accurately detecting the presence of walls.

Power management emerged as another critical aspect of the sensing subsystem design. The incorporation of a P-channel MOSFET and PWM control, as demonstrated in AT-04, successfully reduced power consumption while maintaining reliable wall detection capabilities. This outcome underscores the significance of careful power analysis and the implementation of efficient power-saving mechanisms in battery-operated systems like the micro-mouse.

The physical compatibility test (AT-05) confirmed that the sensing subsystem PCB met the size and connectivity requirements for integration with the micro-mouse platform. This result highlights the importance of considering mechanical constraints and interfacing requirements early in the design process to ensure seamless integration of subsystems.

In conclusion, the sensing subsystem design project successfully addressed the challenges of wall detection, power efficiency, and system integration. The results obtained from the Acceptance Tests clearly support the effectiveness of the design decisions and modifications made throughout the project. The lessons learned from this experience, such as the importance of component selection, power management, and adaptable software design, will be invaluable in future engineering endeavors.

To further enhance the sensing subsystem and the overall micro-mouse project, several suggestions for future work can be made:

1. Implement a potentiometer to aid in calibrating the ADC. Instead of continuously modifying the code to find the optimal boundary values for the ADC, a potentiometer could be used to adjust either the output of the ER subsystem or the range of the ADC. This would allow for more precise and efficient calibration of the sensing subsystem.

2. Include more jumpers in the PCB design to facilitate circuit separation and debugging. During the project, insufficient jumpers led to the need for manual severing of connections using a screwdriver to cut copper traces. By incorporating more jumpers at strategic locations, future iterations of the PCB design can provide greater flexibility and ease of modification, reducing the need for physical alterations to the board.

3. Investigate the use of shielding techniques to minimize the impact of electromagnetic interference (EMI) on the sensing subsystem. As the micro-mouse operates in close proximity to motors and other electronic components, EMI can potentially affect the performance of the sensors. By implementing appropriate shielding methods, such as grounded enclosures or EMI-suppressing materials, the sensing subsystem can be made more robust and resistant to external noise sources.

4. Develop a comprehensive testing protocol that includes a wider range of environmental conditions and maze configurations. While the Acceptance Tests conducted in this project provided valuable insights into the sensing subsystem's performance, additional testing under varied lighting conditions, surface textures, and maze layouts would help identify potential weaknesses and areas for improvement. This expanded testing approach would contribute to the development of a more reliable and adaptable sensing subsystem.

5. Explore the possibility of integrating multiple types of sensors to enhance the micro-mouse's navigation capabilities. In addition to the current IR emitter-receiver pairs, the use of other sensing technologies, such as ultrasonic or time-of-flight sensors, could provide complementary information about the maze environment. By fusing data from multiple sensor modalities, the micro-mouse could achieve a more comprehensive understanding of its surroundings, enabling more advanced navigation strategies and improved maze-solving performance.

By addressing these suggestions, future iterations of the micro-mouse project can achieve even higher levels of performance, efficiency, and robustness, ultimately leading to a more competitive and successful maze-solving robot. The insights gained from this project, combined with the proposed enhancements, will serve as a solid foundation for further development and optimization of the sensing subsystem and the overall micro-mouse platform.