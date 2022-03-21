float sensorValue = 0;          
float slidingValue = 0;
unsigned long myTime;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}
void loop() {
  rotateValue = analogRead(A0);
  slidingValue = analogRead(A1);
  myTime = millis();
  Serial.println(sensorValue);
  Serial.println(String(myTime) + ',' + String(rotateValue) + ',' + String(slidingValue));
  delay(100);
}