// The function of this code, is show how the LED is ON for one second and OFF for one second.
// El funcionamiento de este código es mostrar el funcionamiento de un LED encendido por un segundo y apagado por un segundo.

int LED = 7; //Arduino pin for LED - Pin de Arduino para el LED. 

void setup() {
  pinMode(LED, OUTPUT);   
}

void loop() {
  digitalWrite(LED,HIGH); //Turn ON the LED - Prende el LED.
  delay(1000);            //For one second - Prende un segundo.        
  digitalWrite(LED,LOW);  //Turn OFF the LED - Apaga el LED. 
  delay(1000);            //For one second - Apagado un segundo. 
}

//Follow me on YouTube: https://www.youtube.com/@adrieltrejodearcos3335