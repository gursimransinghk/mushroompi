# mushroompi
mashroompi

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
