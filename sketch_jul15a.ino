const int potPin = 6; // Potentiometer is connected to GPIO6
const int ledPin = 3; // LED is connected to GPIO3

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int potValue  = analogRead(potPin);              // 0‑4095
  int brightness = map(potValue, 0, 4095, 0, 1023); // 0‑1023

  for (int i = 0; i < 50; i++) {                   // crude PWM
    digitalWrite(ledPin, HIGH);
    delayMicroseconds(brightness);
    digitalWrite(ledPin, LOW);
    delayMicroseconds(1023 - brightness);
  }

  Serial.println(brightness);
}

