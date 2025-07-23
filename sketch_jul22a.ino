const int signalPin =25;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(signalPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int signalState =digitalRead(signalPin);
 
if (signalState=HIGH){
  Serial.println("High voltage detected!");
} else{
  Serial.println("no high voltage detected(safe).");
}
delay(500);
}
