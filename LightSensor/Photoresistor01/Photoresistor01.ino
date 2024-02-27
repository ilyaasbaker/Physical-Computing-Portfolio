int ldrPin = A0;              // LDR pin
int ldrVal = 0;               // Value of LDR

void setup() {
  Serial.begin(9600);         // Initialise the serial monitor
}

void loop() {
  
  ldrVal = analogRead(ldrPin);    // Read the analog value of the LDR
  Serial.println(ldrVal);         // Show the value in the serial monitor

  delay(100);                     // Pause 100ms
  
}