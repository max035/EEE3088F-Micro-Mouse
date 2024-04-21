# Introduction

## Problem Description
The micro-mouse project aims to design and construct subassemblies for a simplified maze-solving robot. The project is divided into four modules: processor, motherboard, sensing, and power. Working in pairs, each student is responsible for designing either the sensing or power subsystem. The objective is to create a functional micro-mouse that navigates a maze while adhering to a strict budget and meeting the specified requirements for each subsystem. The sensing subsystem, which is the focus of this report, plays a crucial role in detecting obstacles and walls, enabling the micro-mouse to navigate the maze effectively.

## Scope and limitations
The scope of this project is limited to the design and implementation of the sensing subsystem for the micro-mouse robot. The subsystem will include obstacle detection sensors, power-saving features, and the necessary code to interface with the processor board. However, the design will not cover the integration of the sensing subsystem with the other modules or the overall navigation algorithm for the micro-mouse.

The project's limitations include the strict budget constraints, which may impact component selection and design choices. Additionally, the sensing subsystem's performance may be affected by factors such as sensor accuracy, ambient light conditions, and battery life. Testing and development may also be limited by the availability of resources and time constraints.

# Requirements Analysis

## Requirements

| ID    | Requirement                                                                                                                                                   |
| ----- | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| UR-01 | The sensing subsystem should detect walls in front and on the sides of the micro-mouse.                                                                       |
| UR-02 | The sensing subsystem should consume minimal power to maximize battery life.                                                                                  |
| UR-03 | The sensing subsystem should be reliable and consistently detect walls.                                                                                       |
| FR-01 | The sensing subsystem must include sensors capable of detecting walls within a suitable range for maze navigation.                                            |
| FR-02 | The sensing subsystem must use PWM to control the sensor power, reducing overall power consumption.                                                           |
| FR-03 | The sensing subsystem must communicate wall detection data to the processor board through the state of the LEDs.                                              |
| FR-04 | The sensing subsystem must fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard.                   |
| FR-05 | The sensing subsystem must include software that processes sensor data and determines the presence of walls on the left, right, and front of the micro-mouse. |

## Specifications

| ID      | Specification                                                                                                                                         |
| ------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| SPEC-01 | The sensing subsystem shall detect walls within a range suitable for the micro-mouse maze navigation.                                                 |
| SPEC-02 | The sensing subsystem shall use a PWM duty cycle that reduces power consumption by at least 50% compared to continuous operation.                     |
| SPEC-03 | The sensing subsystem shall use the processor board's LEDs to indicate the presence of walls, with one LED each for the left, right, and front walls. |
| SPEC-04 | The sensing subsystem PCB shall fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard.      |
| SPEC-05 | The sensing subsystem software shall process sensor data and determine the presence of walls.                                                         |

## Testing Procedures

| ID      | Test Procedure                                                                                                                                           | Test Method                                                                                                                                       | Pass/Fail Criteria                                                                                                                                                                          |
| ------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| TEST-01 | Verify that the sensing subsystem detects walls within the suitable range for maze navigation.                                                           | Place the micro-mouse in a controlled environment with walls at various distances and orientations. Monitor the sensor output and LED indicators. | The sensing subsystem should consistently detect walls within the suitable range, and the corresponding LEDs should illuminate.                                                             |
| TEST-02 | Verify that the sensing subsystem reduces power consumption by at least 50% using PWM compared to continuous operation.                                  | Measure the sensing subsystem's power consumption with PWM enabled and disabled. Compare the results.                                             | The power consumption with PWM enabled should be at least 50% lower than with PWM disabled.                                                                                                 |
| TEST-03 | Verify that the sensing subsystem communicates wall detection data to the processor board through the state of the LEDs.                                 | Place the micro-mouse in a controlled environment with walls on the left, right, and front. Observe the LED indicators.                           | The corresponding LEDs should illuminate when walls are detected on the left, right, or front of the micro-mouse, effectively communicating the wall detection data to the processor board. |
| TEST-04 | Verify that the sensing subsystem PCB fits within the available space on the micro-mouse chassis and connects to the 2x14 pin header on the motherboard. | Assemble the sensing subsystem PCB onto the micro-mouse chassis and check for proper fit and connection.                                          | The sensing subsystem PCB should fit within the available space without interference and securely connect to the 2x14 pin header.                                                           |
| TEST-05 | Verify that the sensing subsystem software processes sensor data and determines the presence of walls on the left, right, and front of the micro-mouse.  | Place the micro-mouse in a controlled environment with walls on the left, right, and front. Monitor the sensor data and wall presence indicators. | The sensing subsystem software should accurately determine the presence of walls based on the sensor data.                                                                                  |

## Traceability Analysis

| FR ID | Specification ID(s) | Testing Procedure ID(s) |
| ----- | ------------------- | ----------------------- |
| FR-01 | SPEC-01             | TEST-01                 |
| FR-02 | SPEC-02             | TEST-02                 |
| FR-03 | SPEC-03             | TEST-03                 |
| FR-04 | SPEC-04             | TEST-04                 |
| FR-05 | SPEC-05             | TEST-05                 |

FR-01 is satisfied by SPEC-01, which states that the sensing subsystem shall detect walls within a range suitable for micro-mouse maze navigation. This requirement is verified by TEST-01, where the micro-mouse is placed in a controlled environment with walls at various distances and orientations to ensure that the sensing subsystem consistently detects walls within the suitable range.

FR-02 is satisfied by SPEC-02, which states that the sensing subsystem shall use a PWM duty cycle that reduces power consumption by at least 50% compared to continuous operation. This requirement is verified by TEST-02, where the power consumption of the sensing subsystem is measured with PWM enabled and disabled, and the results are compared to ensure that the power consumption with PWM enabled is at least 50% lower than with PWM disabled.

FR-03 is satisfied by SPEC-03, which states that the sensing subsystem shall use the processor board's LEDs to indicate the presence of walls, with one LED each for the left, right, and front walls. This requirement is verified by TEST-03, where the micro-mouse is placed in a controlled environment with walls on the left, right, and front, and the LED indicators are observed to ensure that the corresponding LEDs illuminate when walls are detected, effectively communicating the wall detection data to the processor board.

FR-04 is satisfied by SPEC-04, which states that the sensing subsystem PCB shall fit within the available space on the micro-mouse chassis and connect to the 2x14 pin header on the motherboard. This requirement is verified by TEST-04, where the sensing subsystem PCB is assembled onto the micro-mouse chassis and checked for proper fit and connection to ensure that it fits within the available space without interference and securely connects to the 2x14 pin header.

FR-05 is satisfied by SPEC-05, which states that the sensing subsystem software shall process sensor data and determine the presence of walls. This requirement is verified by TEST-05, where the micro-mouse is placed in a controlled environment with walls on the left, right, and front, and the sensor data and wall presence indicators are monitored to ensure that the sensing subsystem software accurately determines the presence of walls based on the sensor data.


# Design Decisions

## Component Selection

### Sensor Types Considered

| Sensor Type       | Description                                                                                      | Pros                                                                                                                                                                                                                      | Cons                                                                                                         |
| ----------------- | ------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------ |
| QRD1114           | Reflective object sensor with integrated infrared emitting diode and NPN silicon photodarlington | - Compact all-in-one package<br>- Ideal for non-contact detection of reflective materials<br>- Can detect objects in close proximity or differentiate between black and white surfaces                                    | - Did not work well for long distances<br>- Not used in the breadboard assignment                            |
| SFH205 + TSAL6100 | Photodiode (SFH205) paired with high-power infrared emitting diode (TSAL6100)                    | - Proved to work well for longer distances<br>- SFH205 has a short switching time and is suitable for 950 nm wavelength applications<br>- TSAL6100 has a peak wavelength of 940 nm, making it a good match for the SFH205 | - Sensitive to environmental lighting<br>- Potentially higher complexity and cost due to multiple components |

**Selected Sensor: SFH205 + TSAL6100**  
**Reasons:**  
- Better performance at longer distances  
- Prior experience with these components during the breadboard assignment  

## Voltage Regulation and Level Shifting

### Circuit Type Considered

| Circuit Type                               | Pros                                                                                                                                                                       | Cons                                                                   |
| ------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| Voltage Regulator                          | - Possibly more stable and reliable<br>- Typically used for stepping down voltages, not suitable for stepping up small, fluctuating voltages<br>- Higher power consumption | - More expensive than transistor-based solutions                       |
| MOSFET-based Level Shifter                 | - Less complex than transistor-based solution<br>- More precise                                                                                                            | - Less familiarity with MOSFETs<br>- Possibly higher power consumption |
| Transistor-based Level Shifter (NPN + PNP) | - Readily available components<br>- Inexpensive<br>- Simulated and tested, proving to be sufficient for the application                                                    | - Slightly more complex than MOSFET-based solution                     |

**Selected Circuit: Transistor-based Level Shifter (NPN + PNP)**  
**Reasons:**  
- Familiarity with transistors  
- Readily available components in case of damage  
- Cost-effective solution  

## Sensing Subsystem Subcircuits

1. Emitting Circuit
2. Receiver Circuit
3. Level Switching/Shifting Circuit

## Interfacing

- 2x14 connector for interfacing with the main system



# My comment:
Mistakes I made in the EEE3088 Project:
+Used a GPIO pin do drive current into my circuit instead of as battery: A GPIO pin in an STM32 does not supply a lot of current(25mA maximum), it should instead be used as reference(switch). I should have connected the GPIO pin to a MOSFET that is connected to the BATT pin so 
it can drive the circuit instead. This error will result in the insufficient current driving the circuit.
+Insufficient use of Jumpers and test points: Now that I am noticing all the mistakes I have made, having more strategically placed jumpers and test points would have help me on my journey to fix the PCB.
+Small track width: I used a small track width of 0.2mm, this is not advisable for high currents(do research)
+Approach to design: I approached this project from the wrong prospective. I should have built based on available components in JLPCB, Instead,
I build the circuit with components I wanted and them realized that the components were not available/feasible, making me work around my design, downgrading my design, and making compromises late in the design process
that affected the quality of the final product. Instead if I had a scope of available components and worked from there I would have made less design mistakes and compromises.
(The reason I took my initial approach is because I had already built my initial design with everything working(well suited components selected) so I thought it would just be a matter of building from there. 
TLDR: should have designed with component availability in mind earlier on.
+Lack of understanding of components specifications: I should have also designed with the ratings of the components in mind, as in:
The GPIO pin is basically rated at 3V3 25mA, so I would never handed more that 25mA demand, which is a problem because the sensing portion of my circuit requires a current well over 25mA, for instance, the IR emitter
requires like 100mA to emit to far distances
+Going over design. Double checking everything: I made some silly mistakes in this design like forgetting to correctly assign certain important Netlabels making some of my routing incorrect.
A check of Netlabels should be done to ensure everything is going to the right place.
+Willness to go outside my comfort zone: Had I had the courage I would have used unfamiliar components that would clearly benefited me, e.g. MOSFET, different photodiode(components in general) from the one I used in the Breadboard Assignment,
etc...
+For the emitter circuit, instead of using a low resistor value to get the desired current, I would use a npn as a current source to drive it
+I choose to go for a switching circuit where once a certain voltage is reached based on distance, the circuit would indicated that by turning on an led, this would be directly via a level shifter.
+Another way I could have done this is via Analogue to Digital Conversion, where I would have taken the voltage read by the circuit and coded it to determine when the voltage is on instead via ADC. It could have made a better design in 2 ways. 1. Less components used as no need for level shifting circuit. 2. Possibly more precise way to capture signal received by the receiver circuit for use achieving requirement via ADC. It might have also been more precise maybe, I'm not sure.
+Seem it is advisable to use ground plane on the top and bottom of the PCB. I did not do this, it seems to not be too much of a train smash. But maybe the configuration of the ADC would have been a bit complex

+Another circuit I did consider was a transimpedance amplifier for better current to voltage "conversion". But didn't end up doing with it because of the potential expense in power and cost(given the limited budget) of adding an op amp

# My design desisions
## Emitter Reciever Subsystem
### Emitter Circuit
- From the breadboard assignment, the TSAL6100 was perfect component for IR Sensor applications.
- With enough current though, $I_{f}=100mA$ is worked well to reach  