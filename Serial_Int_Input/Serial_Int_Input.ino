/*
 * This code for printing serial integer(max) 32bit Input.'
 * Code Writen by
 * Md. Kamruzzaman Tipu
 * Junior Embedded Engineer (IoT)
 * NybSys Private Ltd.

*/


int32_t value;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
    while (Serial.available() > 0) {
    value = Serial.parseInt();
    Serial.println(value);
    while(Serial.available()>0) Serial.read();
}
}
