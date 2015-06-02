main(){
# abort if gpio is not installd
command -v gpio >/dev/null 2>&1 || { echo "I require wiringPi but it's not installed. Aborting." >&2;}

  echo "Setting up pin 18"
  gpio -g mode 18 out
  echo "set pin 18 HIGH and wait 2 seconds"
  gpio -g write 18 1
  sleep 2
  echo "set pin 18 LOW and wait 2 seconds"
  gpio -g write 18 0
  sleep 2
  echo "set pin 18 HIGH and wait 2 seconds"
  gpio -g write 18 1
  sleep 2
  echo "set pin 18 LOW and end"
  gpio -g write 18 0
}
main