#!/usr/bin/env python
"""
This script reads a pushbutton until the user aborts
Taken from http://razzpisampler.oreilly.com/ch07.html
"""

import sys # we need this to exit if the GPIO lib is not present
import time # for timing

PIN = 21

# Check if the GPIO lib exist on this system
try:
    import RPi.GPIO as GPIO
    print "GPIO Lib is present. Moving on"
except ImportError:
    print "GPIO Lib is not installed. Stopping program"
    print "Please install it with the commands:"
    print "$ sudo apt-get update && sudo apt-get upgrade"
    print "$ sudo apt-get install rpi.gpio"
    sys.exit()
  # end program if lib not there

def setup():
    """Setup all that stuff"""
    print "setup GPIO"
    GPIO.setmode(GPIO.BOARD)
    GPIO.setup(PIN, GPIO.IN, pull_up_down=GPIO.PUD_UP)
    print "setup GPIO done"

# now run all of that
if __name__ == '__main__':
    try:
        setup()
        while True:
            input_state = GPIO.input(PIN)
            if input_state == False:
                print "Button is pressed"
                time.sleep(0.2)

    except KeyboardInterrupt:
        print "\nbye bye"
        GPIO.cleanup()
    finally:
        print "\nbye bye"
        GPIO.cleanup()
