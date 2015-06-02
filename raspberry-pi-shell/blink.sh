# simple script that blinks a pin once
main(){
  if [ `whoami` != root ]; then
    echo "Please run this script as root or using sudo"
    exit
  fi
  echo "Setup pin 18 as output"
  echo "18" > /sys/class/gpio/export
  echo "out" > /sys/class/gpio/gpio18/direction
  echo "Setting pin HIGH"
  echo "1" > /sys/class/gpio/gpio18/value
  echo "sleep 5 seconds"
  sleep 5
  echo "Setting pin LOW"
  echo "0" > /sys/class/gpio/gpio18/value
  echo "releasing pin 18"
  echo "18" > /sys/class/gpio/unexport
}
main