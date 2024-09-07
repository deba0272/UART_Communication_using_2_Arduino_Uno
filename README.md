# UART Communication Between Two Arduino Uno Boards

This project demonstrates serial communication between two Arduino Uno boards(ATMega 328p) using UART (Universal Asynchronous Receiver-Transmitter).

![Result](https://github.com/user-attachments/assets/662f1285-36ef-4f98-8c4f-839b44c1aac6)


## Pin Connections

1. **Transmitter Arduino (TX) Connections:**
   - Pin `TX (Digital Pin 1)` is used for transmitting data.
   - Ground pin (`GND`) is connected to the `GND` of the Receiver Arduino.

2. **Receiver Arduino (RX) Connections:**
   - Pin `RX (Digital Pin 0)` is used for receiving data.
   - Ground pin (`GND`) is connected to the `GND` of the Transmitter Arduino.

## Steps to Upload and Connect

1. **Upload Transmitter Code to Arduino Uno (Transmitter):**
   - Make sure nothing is connected to Pin 0 (RX) and Pin 1 (TX) during the upload process.
   - After uploading the transmitter code, connect:
     - **TX (Pin 1)** of the transmitter Arduino to **RX (Pin 0)** of the receiver Arduino.
     - **GND** of both Arduinos together for a common ground.

2. **Upload Receiver Code to Arduino Uno (Receiver):**
   - Similarly, disconnect any connections from Pin 0 (RX) and Pin 1 (TX) while uploading the receiver code.
   - Once uploaded, connect the **TX (Pin 1)** of the transmitter Arduino to **RX (Pin 0)** of the receiver Arduino.

3. **Ensure Common Ground:**
   - Connect the GND pin of the transmitter Arduino to the GND pin of the receiver Arduino to establish a common reference.

Thank You!!
Hope You Liked it!!!!
