#!/usr/bin/env python
"""This script reads a tiltswitch until the user aborts"""

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

def loop():
    """loop until user interrupts"""
    print "Starting loop"
    while True:
        input_state = GPIO.input(PIN)
        if input_state == False:
            print "Tiltswitch is tilted"
            time.sleep(0.2)

# now run all of that
if __name__ == '__main__':
    try:
        setup()
        loop()
    except KeyboardInterrupt:
        GPIO.cleanup()
        print "\nbye bye"
    finally:
        GPIO.cleanup()
        print "\nbye bye"
