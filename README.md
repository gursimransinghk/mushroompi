# mushroompi

*********************************************************
To enable Serial Port in RaspberryPi Commands:
*********************************************************
$ sudo raspi-config
        -> Interfacing Options -> enable Serial.
$ sudo nano /boot/cmdline.txt
        -> delete text "console=ttyAMA0,115200"
	Original Text -> dwc_otg.1pm_enable=0 console=ttyAMA0,115200 console=tty1 root=/dev/mmcblk0p6 ro.............
$ sudo reboot
*********************************************************

Reference: https://www.abelectronics.co.uk/kb/article/1035/raspberry-pi-3-and-zero-w-serial-port-usage
