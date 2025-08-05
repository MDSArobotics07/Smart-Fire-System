// Pin assignments
const int green = 10;
const int redLED1 = 3;
const int redLED2 = 4;
const int buzzer = 7;

const int flameSensorPin = A1;   // Senses fire
const int tempSensorPin = A0;    // Temperature sensor

// Thresholds (adjust these based on actual sensor readings)
const int flameThreshold = 600;       // Lower value = more flame detected (Example: If i set the value to 1000 or 10000, the sensor wont sense a fire as the value is too high)
const float tempThresholdC = 30.0;    // Lowered for easier testing in the room

void setup() { //All outside component’s to the breadboard
  pinMode(green, OUTPUT); 
  pinMode(redLED1, OUTPUT);
  pinMode(redLED2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);

  // Start in safe mode when there's no fire
  digitalWrite(green, HIGH);
  digitalWrite(redLED1, LOW);
  digitalWrite(redLED2, LOW);
  digitalWrite(buzzer, LOW);
}

void loop() {
  // Read flame sensor in serial monitor
  int flameValue = analogRead(flameSensorPin);
  
  // Read temperature and convert to Celsius
  int tempRead = analogRead(tempSensorPin);
  float voltage = tempRead * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;

  // Print readings in serial monitor
  Serial.print("Flame Sensor: ");
  Serial.print(flameValue);
  Serial.print(" | Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Fire detected only if both flame and heat conditions are true
  bool fireDetected = (flameValue <= flameThreshold) && (temperatureC >= tempThresholdC);

  if (fireDetected) {
    // Alarm sequence
    digitalWrite(green, LOW);
    tone(buzzer, 1000); // 1kHz tone
    delay(100);
    tone(buzzer, 1000); // 1kHz tone
    delay(100);

    // Flash red LEDs alternately
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, LOW);
    delay(200);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, HIGH);
    delay(200);
  } else {
    // No fire detected
    digitalWrite(green, HIGH);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);
    digitalWrite(buzzer, LOW);
    noTone(buzzer);
    delay(300);
  }

  delay(200); // Loop delay
}
