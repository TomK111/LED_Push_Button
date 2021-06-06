#define LEDPin 8
#define ButtonPin 7

void setup() {
   pinMode(LEDPin, OUTPUT);
   pinMode(ButtonPin, INPUT); 
}

void loop() {
    if(digitalRead(ButtonPin) == LOW) {
       digitalWrite(LEDPin, HIGH);
    } else {
       digitalWrite(LEDPin, LOW); 
    }
}
