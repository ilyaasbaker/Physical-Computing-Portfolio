int ldrPin = A0;              // LDR pin
int ldrVal = 0;               // Value of LDR
int ledPin = 3;     // Build in LED pin

void setup() {
  Serial.begin(9600);         // Initialise the serial monitor
  pinMode(3, OUTPUT);
}

void loop() {
  
  ldrVal = analogRead(ldrPin);    // Read the analog value of the LDR
  Serial.println(ldrVal);         // Show the value in the serial monitor

  if (ldrVal > 200) {             // If the LDR value is greater than 200
    digitalWrite(ledPin, HIGH);   // Turn buildin LED on
  } else {
    digitalWrite(ledPin, LOW);    // Turn buildin LED off
  }

  delay(100);                     // Pause 100ms
  
}