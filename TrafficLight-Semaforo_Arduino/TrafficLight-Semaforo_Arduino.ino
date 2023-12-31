// The function of this code, is demostrate a traffic light in F1. 
// El funcionamiento de este código es mostrar un ejemplo de un semáforo en F1. 

void setup()
{
  pinMode(2,OUTPUT);  //Arduino pin - Pin del Arduino. 
  pinMode(4,OUTPUT);  //Arduino pin - Pin del Arduino. 
  pinMode(7,OUTPUT);  //Arduino pin - Pin del Arduino. 
  //Primer semáforo - First Traffic Light. 
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  delay(2000);
  //Segundo semáforo - Second Traffic Light.
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  delay(2000);
  //Tercer semáforo - Third Traffic Light. 
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  delay(2000);
  //Apagado - OFF
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  delay(2000);
}

void loop()
{
  
}

//Follow me on YouTube: https://www.youtube.com/@adrieltrejodearcos3335