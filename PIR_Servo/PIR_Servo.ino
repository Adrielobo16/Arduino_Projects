//This code works when the PIR sensor detects motion; the servo motor will move to a 90-degree angle.
//Este código funciona cuando el sensor PIR detecta un movimiento, el servomotor se moverá a un ángulo de 90 grados.
#include <Servo.h>
byte pinPIR = 2;          //Arduino Pin for PIR sensor - Pin de Arduino para sensor PIR.
Servo miServo;          
bool Presencia;           //variable for presence - variable 
void setup()
{
  pinMode(pinPIR,INPUT);
  miServo.attach(4);      //Arduino Pin for servo motor - Pin de Arduino para servomotor. 
  Serial.begin(9600);
}

void loop()
{
  Presencia = digitalRead(pinPIR);
  if(Presencia == 1)
  {
    miServo.write(90);
  }
  else
  {
   miServo.write(00);
  }
}

//Follow me on YouTube: https://www.youtube.com/@adrieltrejodearcos3335