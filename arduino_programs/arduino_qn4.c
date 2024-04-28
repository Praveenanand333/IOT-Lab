//Arduino_qn_4

const int buttonPin = 2;
const int irSensorPin = A0;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);
  
  // Read the state of the IR sensor
  int irSensorValue = analogRead(irSensorPin);

  if (buttonState == HIGH || irSensorValue > 1000) {  
    digitalWrite(ledPin, HIGH);  // Turn ON the LED
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);  // Turn OFF the LED
    Serial.println("LED OFF");
  }
  // Serial.println(irSensorValue);
  // Serial.println(buttonState);
  delay(100);  /
}

