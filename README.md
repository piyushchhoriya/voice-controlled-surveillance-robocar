# IoT_Miniproject  
Voice Controlled Surveillance Robocar  

## Components Used  
- Arduino Uno  
- L298N Motor Driver Module  
- HC-05 Bluetooth Module  
- Battery  
- Mobile Camera  

## Purpose  
To monitor activities or incidents that pose a risk to human involvement.  

## Working  
The car is connected to the cell phone via the **HC-05 Bluetooth module**, allowing voice commands to be sent.  
- The **Arduino Uno** processes the received commands and controls the **L298N motor driver**, which moves the car accordingly.  
- A **mobile camera** is attached to the front side of the car for real-time video monitoring from a laptop or mobile device.  
- The system enables remote navigation and surveillance in areas where human intervention is risky.  

## Voice Commands  
- `Forward (F)` → Move forward  
- `Backward (B)` → Move backward  
- `Left (L)` → Turn left  
- `Right (R)` → Turn right  
- `Stop (S)` → Stop the car  

## Setup Instructions  
1. **Hardware Assembly**:  
   - Connect the **HC-05 Bluetooth module** to Arduino (`TX to RX` & `RX to TX`).  
   - Connect the **L298N motor driver** to Arduino and motors.  
   - Attach a **mobile phone** with a live-streaming app for video surveillance.  

2. **Software Setup**:  
   - Upload the **Arduino code** to the Arduino Uno using the **Arduino IDE**.  
   - Pair your phone with the **HC-05 Bluetooth module**.  
   - Use a voice-controlled **mobile app (MIT App Inventor or Bluetooth Terminal)** to send commands.  

## Future Enhancements  
- Integrating **AI-based object detection** for smarter surveillance.  
- Adding **Wi-Fi or GSM module** for long-range control.  
- Implementing **obstacle detection** using ultrasonic sensors.  


Let me know if you need the Arduino code or the mobile app details! 🚀  
