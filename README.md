![image](https://github.com/user-attachments/assets/6d17a5ae-84b7-4c23-ab93-ba759f7683f7)# Smart-Trafic-Management

# Smart Traffic Management System

A smart traffic management system designed to optimize traffic flow and ensure safety using sensors, LEDs, and a buzzer. This system dynamically adjusts traffic light timing based on vehicle presence and weather conditions.

---

## Features
- **Traffic Light Control**: Traffic lights are controlled via LEDs connected to Pins 7 and 6.
- **Vehicle Detection**: IR sensors (Pins 9 and 8) detect vehicles and adjust the traffic light sequence.
- **Rain Detection**: A rain sensor (Pin A3) adjusts traffic light timing during rainy conditions for safety.
- **Emergency Reset**: A push button (Pin 2) is used to reset or stop the system.
- **Alerts**: A buzzer (Pin 11) provides audio alerts when necessary.

---

## Components Used
- **LEDs**: For traffic light simulation.
- **IR Sensors**: Detect the presence of vehicles (LOW signal when a vehicle is present).
- **Rain Sensor**: Measures rain intensity and adjusts traffic flow timing.
- **Push Button**: For manual reset or stopping the system.
- **Buzzer**: Alerts for unsafe conditions.

---

## Pin Configuration
| Component        | Arduino Pin |
|------------------|-------------|
| Traffic Light LEDs | 7, 6        |
| IR Sensors        | 9, 8        |
| Push Button       | 2           |
| Buzzer            | 11          |
| Rain Sensor       | A3          |

---

## How It Works
1. **Vehicle Detection**: The IR sensors detect the presence of vehicles and adjust the timing of the traffic lights accordingly.
2. **Rain Adjustment**: The rain sensor detects rain intensity and dynamically increases the red light timing for safe driving conditions.
3. **Reset Functionality**: The push button can reset or stop the entire system in emergencies.
4. **Alert System**: The buzzer alerts nearby pedestrians and vehicles during unsafe conditions or malfunctions.

---

## Circuit Diagram
(Include an image or a link to your circuit diagram here.)

---

# OUTPUT:
![image](https://github.com/user-attachments/assets/4c20e16a-68a7-4fdb-8b6c-7bc75abca32d)
![image](https://github.com/user-attachments/assets/041c24e1-57ed-45c6-8bab-b6cd124e89fa)
![image](https://github.com/user-attachments/assets/aab31c42-7049-4fb0-9d6b-c563193eed13)
![image](https://github.com/user-attachments/assets/3cd8b3bd-11ee-4c3c-9a78-69b34c1f68b2)


## Installation & Setup
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/smart-traffic-management-system.git

