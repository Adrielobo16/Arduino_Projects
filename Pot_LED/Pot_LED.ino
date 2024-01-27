//Basic code for use a potentiometer to control the brightness of an LED.
//Código básica para controlar brillo de un LED con un potenciometro. 
void setup()
{
 pinMode(A2,INPUT);
 pinMode(12,OUTPUT);
}
void loop()
{
  Serial.begin(9600);
 if(analogRead(A2)<=511)
 {
  analogWrite(9,127);
 }
 else 
 {
   analogWrite(9,15);
 }
  if(analogRead(A2)<=0)
  {
   analogWrite(9,255);
  }
  else
  {
   analogWrite(9,0); 
  }
  if(analogRead(A2)>=511)
  {
    analogWrite(9,0);
  }
  else
  {
   analogWrite(9,255); 
  }
}

//Follow me on my YouTube channel: https://www.youtube.com/@adrieltrejodearcos3335