# EEE3088F-Micro-Mouse

This project is made up of five modulues. Namely the mother board, the processor, power and sensing. We will be focusing on power and sensing.

## Sensing Subsystem

The sensing subsystem is a crucial component of the micro-mouse project, responsible for detecting walls and enabling the robot to navigate the maze effectively. This subsystem consists of three main components:

1. Emitter-Receiver (ER) Sensor Subsystem
2. Power Saving Mechanism
3. Output and Level Shifting

### Emitter-Receiver (ER) Sensor Subsystem

The ER sensor subsystem includes three separate ER circuits for left, front, and right wall detection. Each circuit utilizes a TSAL4400 IR emitting diode and an SFH203 photodiode. The emitter circuit is designed to provide the optimal current of 100mA to the IR emitting diode, while the receiver circuit uses a 100kΩ resistor in series with the photodiode for sensitive output.

### Power Saving Mechanism

To reduce power consumption, the sensing subsystem employs Pulse Width Modulation (PWM) to control the duty cycle of the ER circuits. PWM allows the ER sensors to operate for a shorter time while still functioning as intended, resulting in significant power savings compared to continuous operation.

### Output and Level Shifting

Initially, the analog output signals from the ER sensors were intended to be converted to digital levels using an NPN and PNP transistor-based level shifter. However, during testing, it was determined that connecting the analog outputs directly to the ADC pins of the microcontroller (PA4, PA5, PA6) provided a more adaptable and robust solution for handling variations in ambient light conditions.

### PCB Design

The sensing subsystem PCB has been designed to fit within the available space on the micro-mouse chassis, with a width less than 70mm and a length between 6mm and 50mm. The PCB includes strategically placed jumpers for debugging and test points for probing, facilitating easy troubleshooting and modification. The PCB connects to the motherboard via a 2x14 pin header.

### Acceptance Testing

The sensing subsystem has undergone rigorous acceptance testing to ensure its functionality, reliability, and compatibility with the micro-mouse platform. The testing procedures covered the following aspects:

1. Functionality test of the ER subsystems (AT-01)
2. Consistency test of the sensing subsystem's output voltage (AT-02)
3. Functionality test of the sensing subsystem software (AT-03)
4. Power consumption test of the sensing subsystem (AT-04)
5. Physical compatibility test (AT-05)

The results of the acceptance tests demonstrated the effectiveness of the design decisions and modifications made throughout the project, ensuring that the sensing subsystem meets the project's requirements and specifications.

For more detailed information on the sensing subsystem design, testing, and results, please refer to the [project report](/Sensing%20Subsystem/Write%20Up/EEE3088F_final_report.pdf).
