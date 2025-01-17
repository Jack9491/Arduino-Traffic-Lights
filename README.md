# 🚦 Arduino Traffic Light Project

This project is a **traffic light simulation** built with an **Arduino Uno** and designed as part of the **2nd-year Real-Time Embedded Systems Module**. This was my **first-ever embedded systems project**, and it provided a great introduction to working with microcontrollers, circuits, and real-time programming.

The system simulates a functioning traffic light using LEDs, resistors, and a push-button, showcasing fundamental concepts in embedded systems and real-time control.

---

## 📜 Overview

The project simulates a realistic traffic light system with the following features:
- **Red, Yellow, and Green LEDs** to represent traffic signals.
- A **push-button** to simulate pedestrian interaction or traffic light control.
- A sequence of LED transitions replicating real-world traffic lights.
- Programmed using **Arduino IDE** with real-time event handling.

This project marked the beginning of my journey into embedded systems and taught me valuable lessons in hardware and software integration.

---

## 🖥️ Technologies Used

- **Arduino Uno**: Microcontroller used to control the traffic light logic.
- **Arduino IDE**: For programming the microcontroller.
- **Breadboard & Components**: Includes LEDs, resistors, and push-buttons.
- **C++**: Programming language used for the embedded system logic.

---

## 🔧 How It Works

1. The **Red, Yellow, and Green LEDs** light up in sequence to simulate real traffic lights.
2. Pressing the **push-button** triggers additional events or cycles (e.g., pedestrian crossing).
3. The program handles the logic using **real-time embedded system principles**:
   - Timers to control LED durations.
   - Interrupts to handle the button press without delaying other operations.

---

## 🛠️ Setup Instructions

To replicate the project:
1. **Download the code** from this repository.
2. **Prepare the hardware**:
   - Connect the Arduino Uno to the LEDs, resistors, and push-button using a breadboard.
   - Ensure connections match the pin configuration in the code.
3. **Upload the code**:
   - Open the `.ino` file in the Arduino IDE.
   - Connect the Arduino Uno to your computer via USB.
   - Upload the code to the Arduino board.
4. Watch the LEDs simulate the traffic light sequence!

---

## 🎥 Project in Action

Here’s a video showcasing the traffic light system in action:

![Traffic Light Demo](Video.mp4)

---

## 🖼️ Project Showcase

### Circuit Design
![Circuit Design](https://github.com/user-attachments/assets/ddc14923-e576-406b-9916-6ab9591f08a1)

### Breadboard and Arduino Connections
![Breadboard Close-Up](https://github.com/user-attachments/assets/71d39be5-6558-4ca1-aa4f-6daf20f2a3e0)
![Breadboard Components](https://github.com/user-attachments/assets/573c8e93-ef30-4a81-9ae7-b739453f003a)
![Arduino and Circuit](https://github.com/user-attachments/assets/b923ef5f-ef1c-4a2d-b383-d4befcf83f2b)

---

## ✨ Key Learnings

- Practical application of **real-time system design** principles.
- Debugging and refining **embedded systems** hardware and software.
- Using **interrupts and timers** for event-driven programming.
- The importance of patience and attention to detail in hardware projects.

---

Feel free to explore the code, watch the video, or build your own version of the project! 😊
