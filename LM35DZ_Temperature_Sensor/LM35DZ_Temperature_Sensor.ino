const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);

  // Convert the 0-1023 ADC reading to millivolts.
  // Assumes a 5V board (Uno, Nano, Mega). For a 3.3V board,
  // replace 5000.0 with 3300.0.
  float voltage_mV = reading * (5000.0 / 1024.0);

  // LM35 outputs 10 mV per degree Celsius.
  float temperatureC = voltage_mV / 10.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  delay(1000);
}
