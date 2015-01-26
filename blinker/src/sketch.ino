// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin 13 as an output.
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(13, OUTPUT);
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
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
