/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);    // turn the LED off by making the voltage LOW
}
int pins[4] = {0, 2, 4, 6}; 

void blinker(int led) {
  int delayTime = 0;
  while(delayTime < 150) {
      digitalWrite(led, HIGH);
      delay(delayTime);
      digitalWrite(led, LOW);
      delay(delayTime);  
      delayTime += 50;
  }
}
// the loop function runs over and over again forever
void loop() {
  for (int i; i<4; i++) {
    blinker(pins[i]);    // turn the LED off by making the voltage LOW
    if (i > 0) {
      digitalWrite(pins[i-1], LOW);    // turn the LED off by making the voltage LOW
    } else {
       digitalWrite(pins[3], LOW);    // turn the LED off by making the voltage LOW
    }
    delay(1000);           
  }
}
