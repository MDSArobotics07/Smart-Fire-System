
# Smart Fire System 🔥

## Description
The Smart Fire System is an Arduino-based project that simulates how a real-world fire alarm system works. When a fire is detected, the system responds with flashing red lights, a loud alarm sound from a piezo buzzer, and rising temperature readings. It's a basic prototype to demonstrate how fire detection and warning systems operate using common sensors and components.

## Components Used
- Arduino Uno (or compatible)
- Breadboard
- Jumper wires
- Flame sensor
- Temperature sensor (TMP36)
- Piezo buzzer
- 2x Red LEDs
- 1x Green LED
- Resistors (220Ω for LEDs)

## Installation / Setup

1. **Build the Circuit**
   - Connect the flame sensor to analog pin A1.
   - Connect the temperature sensor to analog pin A0.
   - Connect the piezo buzzer to digital pin 7.
   - Connect the green LED to digital pin 12.
   - Connect the red LEDs to digital pins 3 and 4.
   - Use appropriate resistors with the LEDs.
   - Use the breadboard to connect everything securely.

2. **Upload the Code**
   - Open the Arduino IDE.
   - Connect your Arduino to your computer.
   - Upload the sketch to the board.

3. **Test the System**
   - Open the Serial Monitor (optional) to view sensor values.
   - Expose the flame sensor to a light source to simulate fire.
   - Warm up the temperature sensor by holding it gently or placing it near a warm object.

## How It Works

- When the system is powered on:
  - The **green LED** stays on, indicating normal conditions.
- If the **flame sensor** detects a flame or high heat level:
  - The **red LEDs** begin to flash.
  - The **piezo buzzer** sounds an alert.
- The **temperature sensor** reads ambient heat levels.
  - These can be monitored to simulate heat increase during a fire.

This setup mimics a real fire alarm where both visual (LEDs) and audio (buzzer) alerts are triggered during a fire event.

## Images / Videos
_Add pictures or videos of your circuit here._

<img width="1520" height="1392" alt="Screenshot 2025-08-04 at 1 17 56 PM-overlay" src="https://github.com/user-attachments/assets/5d78996b-b494-43dd-98b0-c9949356b5d4" />


## Simulation
If you’ve created a simulation using Tinkercad or another platform, link it here:

- [Tinkercad Simulation](https://www.tinkercad.com/things/gLOpXrMU750-flame-sensor/editel?returnTo=https://www.tinkercad.com/dashboard/designs/circuits)

## Credits
Created by Zahara BG  
