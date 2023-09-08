# Embedding Embedded in Mushroom Growing

Mushroom growing is a delicate process. This project provides a robust solution to monitor and control various environmental conditions vital for mushroom growth.

### 🍄 Project Description
This Raspberry Pi-based project leverages multiple relay modules to control soil moisture, temperature, light, ions, and heating elements. Data is collected and transferred over UART, offering real-time monitoring capabilities.

### 📁 Repository Contents

1. **RaspberryPi_Code.c**: Contains the main program logic for the Raspberry Pi, interfacing with sensors and relays.
2. **UART.c**: Handles the UART communication part of the project, ensuring seamless data transmission between the Raspberry Pi and other connected devices.

### 🧰 Requirements

- **Hardware**:
  - Raspberry Pi
  - Soil Moisture Sensor
  - Temperature Sensor
  - Light (LDR) Sensor
  - Ion Sensor
  - Heater Element
  - Relay Modules (x5)
  - UART communication tools (potentially an Arduino board or similar microcontroller)

- **Software**:
  - [WiringPi Library](http://wiringpi.com/)

### 🔧 Setup & Usage

1. **Hardware Setup**:
   - Connect all sensors and relay modules to the respective GPIO pins as mentioned in the code.
   - Ensure UART communication tools (like an Arduino) are set up and ready.

2. **Software Setup**:
   - Clone this repository:
     ```
     git clone https://www.github.com/gursimransinghk/mushroompi.git
     ```
   - Navigate to the directory and compile the C code:
     ```
     gcc -o output_name RaspberryPi_Code.c -lwiringPi
     gcc -o output_name_UART UART.c -lwiringPi
     ```
   - Run the compiled code:
     ```
     ./output_name
     ./output_name_UART
     ```

3. **Enabling Serial Port on Raspberry Pi**:
   - Open the Raspberry Pi configuration tool:
     ```
     sudo raspi-config
     ```
   - Navigate to `Interfacing Options` and choose to enable `Serial`.
   - Modify the `/boot/cmdline.txt` file:
     ```
     sudo nano /boot/cmdline.txt
     ```
   - Delete the text `console=ttyAMA0,115200` from the file.
   - Original Text should look like this:
     ```
     dwc_otg.1pm_enable=0 console=ttyAMA0,115200 console=tty1 root=/dev/mmcblk0p6 ro.............
     ```
   - Reboot the Raspberry Pi:
     ```
     sudo reboot
     ```

### 📚 References

- [Raspberry Pi 3 and Zero W Serial Port Usage](https://www.abelectronics.co.uk/kb/article/1035/raspberry-pi-3-and-zero-w-serial-port-usage)

### ⚠️ No License

This project is currently without a license. Use at your own discretion.

### 📢 Acknowledgements

This project was possible with the guidance and inputs of various experts in the field of embedded systems and mushroom cultivation.
