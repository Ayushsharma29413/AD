#include <Servo.h>

Servo myservo; // creating myservo object
int buttonPin = 11;//set button pin
int buttonState = 0; // set buttonState 

void setup()
{
  myservo.attach(12);// attach the 13 pin to servo
  pinMode(buttonPin, INPUT); // set button to input
}


void loop()
{
  
  buttonState = digitalRead(buttonPin); // read and save to the variable "buttonState" the actual state of button 
  
  if (buttonState == HIGH)
  myservo.write(0);
  
  else
  myservo.write(65);
  delay(1500);
  
}
