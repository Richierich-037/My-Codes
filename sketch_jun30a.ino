const int potPin = 2;


void setup() {
  Serial.begin(115200);
}

void loop() {
 int potValue = analogueRead(potPin);
 Serial.print("Potentiometer Value:");
 Serial.println(potValue);
 delay(200);
 
}
