#include <NewPing.h> 
const int TriggerPin = 3;
const int TriggerPin2 = 6;
const int EchoPin2 = 5; 
const int EchoPin = 4; 
NewPing sonar(TriggerPin, EchoPin, 100); 
NewPing sonar2(TriggerPin2, EchoPin2, 100); 

void setup() { 
 Serial.begin(9600); 
} 
void loop() { 
 int cm = sonar.ping_cm(); 
 int cm2 = sonar2.ping_cm();
 Serial.println("first"); 
 Serial.println(cm); 
 Serial.println("second"); 
 Serial.println(cm2); 
 //Serial.println('second',cm2); 
 delay(250); 
}
