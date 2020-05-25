/* Serial read Example
 This example code is in the public domain.
 */
int delayValue = 10;//number of ms between read and delay time   

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
 int sensorValue = analogRead(A1);// read sensor pin
  Serial.println(sensorValue);
  delay(delayValue);        // delay in between reads for stability
}



