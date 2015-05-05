#!/usr/bin/env python
"""This script switches a relay until the user aborts"""

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
    GPIO.setup(PIN, GPIO.OUT)
    # pull them all low
    GPIO.output(PIN, GPIO.LOW)
    print "setup GPIO done"

def loop():
    """loop until user interrupts"""
    print "Starting loop"
    while True:
        time.sleep(1)
        GPIO.output(PIN, GPIO.HIGH)
        time.sleep(1)
        GPIO.output(PIN, GPIO.LOW)

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
