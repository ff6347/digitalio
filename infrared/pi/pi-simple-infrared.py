#!/usr/bin/env python
"""
This script reads a pushbutton until the user aborts
Taken from http://razzpisampler.oreilly.com/ch07.html
"""

import sys # we need this to exit if the GPIO lib is not present
import time # for timing

INPIN = 12
OUTPIN = 11
TOGGLE = False

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
    GPIO.setup(INPIN, GPIO.IN)
    GPIO.setup(OUTPIN, GPIO.OUT)
    print "setup GPIO done"

# now run all of that
if __name__ == '__main__':
    try:
        setup()
        input_state = 0
        while True:
            if TOGGLE == False:
                GPIO.output(OUTPIN, GPIO.HIGH)
                time.sleep(0.05)
                TOGGLE = True
            else:
                input_state = GPIO.input(INPIN)
                print input_state
            if input_state == True:
                print "Messsage received"
                time.sleep(0.05)
                GPIO.output(OUTPIN, GPIO.LOW)
                time.sleep(0.05)
                TOGGLE = False
            # else:
                # print "Button is not pressed"
                # time.sleep(0.2)

    except KeyboardInterrupt:
        print "\nbye bye"
        GPIO.cleanup()
    finally:
        print "\nbye bye"
        GPIO.cleanup()
