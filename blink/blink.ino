/*
  Blink

  Turns on an LED on for one second, then off for one second, repeatedly.
  Prints "blinking" on the serial port.

  The example has been tested with LED attached to GPIO4 (aka pin 4) of
  Olimex MOD-WIFI-ESP8266-DEV.

 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 4 as an output.
  pinMode(4, OUTPUT);
  // open the serial port at 115200 bps:
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("blinking...");
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
