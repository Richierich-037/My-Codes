const int potPin = 4; // Potentiometer connected to GPIO4
const int ledPin = 2; // LED connected to GPIO2 (on‑board LED for many dev boards)

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

