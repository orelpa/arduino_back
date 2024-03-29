
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5000.0 / 1023.0);
  Serial.println(int(voltage));
  Serial.println(voltage / 50);
  delay(100);
  // put your main code here, to run repeatedly:

}
