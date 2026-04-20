const int soundPin = 2;
const int ledPin = 13;

unsigned long windowStart = 0;
int noiseCount = 0;

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(soundPin) == HIGH) {
    noiseCount++;
    delay(5); 
  }

  if (millis() - windowStart >= 1000) { 
    if (noiseCount > 15) {   /
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }

    noiseCount = 0;
    windowStart = millis();
  }
}
