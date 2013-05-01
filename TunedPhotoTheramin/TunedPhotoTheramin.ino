const int sensorMin = 300;      // sensor minimum, discovered through experiment
const int sensorMax = 900;    // sensor maximum, discovered through experiment

void setup() {
  // initialize serial communication:
  Serial.begin(9600);  
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  int sensorReading2 = analogRead(A1);
  // map the sensor range to a range of four options:
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
  int range2 = map(sensorReading2, sensorMin, sensorMax, 0, 3);

Serial.println(sensorReading2);

switch (range2) {
case 0:
  switch (range) {
  case 0:    // your hand is on the sensor
    tone(8,587,8000);
    break;
  case 1:    // your hand is close to the sensor
    tone(8,440,8000);
    break;
  case 2:    // your hand is a few inches from the sensor
    tone(8,369,8000);
    break;
  case 3:    // your hand is nowhere near the sensor
    tone(8,293,8000);
    break;
  }
  delay(1);        // delay in between reads for stability
  break;
case 1:
  switch (range) {
  case 0:    // your hand is on the sensor
    tone(8,392,8000);
    break;
  case 1:    // your hand is close to the sensor
    tone(8,493,8000);
    break;
  case 2:    // your hand is a few inches from the sensor
    tone(8,587,8000);
    break;
  case 3:    // your hand is nowhere near the sensor
    tone(8,784,8000);
    break;
  delay(1);        // delay in between reads for stability
}
case 2:
  switch (range) {
  case 0:    // your hand is on the sensor
    tone(8,440,8000);
    break;
  case 1:    // your hand is close to the sensor
    tone(8,554,8000);
    break;
  case 2:    // your hand is a few inches from the sensor
    tone(8,659,8000);
    break;
  case 3:    // your hand is nowhere near the sensor
    tone(8,880,8000);
    break;
  }
  delay(1);        // delay in between reads for stability
}
}
