#!/usr/bin/env python
"""
This script reads a pushbutton until the user aborts
Taken from http://razzpisampler.oreilly.com/ch07.html
"""

import sys # we need this to exit if the GPIO lib is not present
import time # for timing

INPIN = 12
MSGCOUNTER = 0

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
    GPIO.setup(INPIN, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
    print "setup GPIO done"

# now run all of that
if __name__ == '__main__':
    try:
        setup()
        print "Did you know that the Facetime camera of an iPhone"
        print "has no IR filter?"
        print "(the camera you do selfies with)"
        while True:
            if  GPIO.input(INPIN) == GPIO.LOW:
                MSGCOUNTER += 1
                print "Messsage received, No:", MSGCOUNTER
                # time.sleep(0.05)
            # else:
                # print "No messsage"
                # time.sleep(0.05)

    except KeyboardInterrupt:
        print "\nbye bye"
        GPIO.cleanup()
    finally:
        print "\nbye bye"
        GPIO.cleanup()
