void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("HI, I'm new");
  delay(500);
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial.print("I got ");
    Serial.write(inByte);
    Serial.println(" ");
    delay(1000);
  }
}
