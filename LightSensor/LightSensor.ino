// void setup() {
//   // Setup serial communication at baudrate 9600 for reading the light sensor
//   Serial.begin(9600);
// }

// void loop() {
//   // reads the input on analog pin A0
//   int lightValue = analogRead(A0);

//   // Print out the values to read in the Serial Monitor
//   Serial.print("Analog reading (0-1023): ");
//   Serial.print(lightValue);

//   // Use the value to determine how dark it is 
//   // (Try tweaking these to make it more accurate)
//   if (lightValue < 10) {
//     Serial.println(" - Dark");
//   } else if (lightValue < 200) {
//     Serial.println(" - Dim");
//   } else if (lightValue < 500) {
//     Serial.println(" - Light");
//   } else if (lightValue < 800) {
//     Serial.println(" - Bright");
//   } else {
//     Serial.println(" - Very bright");
//   }

//   delay(500);
// }

int ldrPin = A0;              // LDR pin
int ldrVal = 0;               // Value of LDR
int ledPin = LED_BUILTIN;     // Build in LED pin

void setup() {
  Serial.begin(9600);         // Initialise the serial monitor
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  
  ldrVal = analogRead(ldrPin);    // Read the analog value of the LDR
  Serial.println(ldrVal);         // Show the value in the serial monitor

  if (ldrVal < 200) {             // If the LDR value is lower than 200
    digitalWrite(ledPin, HIGH);   // Turn buildin LED on
  } else {
    digitalWrite(ledPin, LOW);    // Turn buildin LED off
  }

  delay(100);                     // Pause 100ms
  
}