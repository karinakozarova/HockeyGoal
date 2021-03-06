#include <NewPing.h>

const int ledPin = 13;

const int leftSensorTriggerPin = 3;
const int rightSensorTriggerPin = 6;
const int rightSensorEchoPin = 5;
const int leftSensorEchoPin = 4;

const int goalDistance = 25;

NewPing left_sensor(leftSensorTriggerPin, leftSensorEchoPin, 100);
NewPing right_sensor(rightSensorTriggerPin, rightSensorEchoPin, 100);

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LOW);

  int leftDistance = left_sensor.ping_cm();
  int rightDistance = right_sensor.ping_cm();

  if((leftDistance < goalDistance && leftDistance > 0) && (rightDistance < goalDistance && rightDistance > 0) ){
    digitalWrite(ledPin, HIGH);
    Serial.println("Goaaaaallll!!!");
    delay(5000);
    digitalWrite(ledPin, LOW);
  }
}
