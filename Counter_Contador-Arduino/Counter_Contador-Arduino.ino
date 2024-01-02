//This code show how a 7-Segment Display works in Arduino. The display shows the numbers 0 to 9.
//Este código demuestra como funciona el display 7 segmentos, mostrando los números del 0 al 9.
const int A= 6;
const int B= 7;
const int C= 8;
const int D= 9;
const int E= 10;
const int F= 11;
const int G= 12;

void conteo(int s1, int s2, int s3, int s4, int s5, int s6, int s7){
 
  digitalWrite(A,s1);  
  digitalWrite(B,s2); 
  digitalWrite(C,s3); 
  digitalWrite(D,s4);
  digitalWrite(E,s5);
  digitalWrite(F,s6);
  digitalWrite(G,s7);
  delay(1000);
}

void setup()
{
  Serial.begin(9600);
  pinMode(A, OUTPUT);//A in the display - Pin A del display.
  pinMode(B, OUTPUT);//B in the display - Pin B del display.
  pinMode(C, OUTPUT);//C in the display - Pin C del display.
  pinMode(D, OUTPUT);//D in the display - Pin D del display.
  pinMode(E, OUTPUT);//E in the display - Pin E del display.
  pinMode(F, OUTPUT);//F in the display - Pin F del display.
  pinMode(G, OUTPUT);//G in the display - Pin G del display.
}

void loop()
{
  //These lines show the order that the numbers will be displayed. 
  //Estas lineas de código muestran el orden en el que serán mostrados los números.
  conteo(1,1,1,1,1,1,0); // cero - zero
  conteo(0,1,1,0,0,0,0); // uno - one
  conteo(1,1,0,1,1,0,1); // dos - two
  conteo(1,1,1,1,0,0,1); // tres - three
  conteo(0,1,1,0,0,1,1); // cuatro - four 
  conteo(1,0,1,1,0,1,1); // cinco - five
  conteo(1,0,1,1,1,1,1); // seis - six
  conteo(1,1,1,0,0,0,0); // siete - seven
  conteo(1,1,1,1,1,1,1); // ocho - eight
  
  //nueve - nine 
  digitalWrite(A,HIGH);  
  digitalWrite(B,HIGH); 
  digitalWrite(C,HIGH); 
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  delay(500);
}

//Follow me on YouTube: https://www.youtube.com/@adrieltrejodearcos3335