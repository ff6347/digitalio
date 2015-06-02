raspberry pi shell
==================

This is for advanced shell users. In *nix systems everything is a file. Also the GPIO pins can be accessed like this. So you can find some nice getting strated [info here](http://www.raspberry-projects.com/pi/command-line/io-pins-command-line/io-pin-control-from-the-command-line) on how to edit those files from the command line.   

Connect the pin 18 (on a cobbler #18 not the phsical pin numbers) to a resistor of 220Ohm and the resistor to the anode of your LED. Connect the cathode to GND.

Take a look at the script [raspberry-pi-shell/blink.sh](/raspberry-pi-shell/blink.sh). There you see the basic usage of the gpio commands. You have to run this script as sudo by running:  

    sudo sh blink.sh  

------------------

## Wiring Pi 

You also can use the [wiringPi](http://wiringpi.com/) [gpio utility](https://projects.drogon.net/raspberry-pi/wiringpi/the-gpio-utility/) for controling the pins from the command line.  

Run these commands:    

    sudo apt-get update && sudo apt-get upgrade
    sudo apt-get install git-core
    cd /home/pi
    git clone git://git.drogon.net/wiringPi
    cd wiringPi
    ./build

This should clone, build and install wiringPi and the gpio utility. To verify run

     gpio -v

Now you have the gpio utility installed. You can run the script [raspberry-pi-shell/blink-with-gpio.sh](raspberry-pi-shell/blink-with-gpio.sh) by running:  

    sh blink-with-gpio.sh

The gpio utility does not need to be sudo.  