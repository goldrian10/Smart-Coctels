
#include <LiquidCrystal.h>
int buttonIzqPin = 5;
int buttonDerPin = 6;
int buttonOkPin = 7;
int activar1=0; activar2=0, activar3=0, activar4=0;
int delayVodka=0, delayLimon=0, delayArandanos=0, delayNaranja=0;

LiquidCrystal lcd(12 11 4 3 2 1) // RS ENABLE D4 D5 D6 D7

void setup() {
  
  pinMode(buttonIzqPin, INPUT);   
  pinMode(buttonDerPin, INPUT);   
  pinMode(buttonOkPin, INPUT);   
 
    
}

void loop(){
  
    
  
}//fin loop

void cosmopolitan(){
 delayVodka=2000;
 delayLimon=900;
 delayArandanos=5000;
 
 vodka(delayVodka);
 limon(delayLimon); 
 arandanos(delayArandanos);
}

void redrooster(){
  delayVodka=2000;
  delayArandanos=5000;
  delayNaranja=5000;
 
  vodka(delayVodka);
  naranja(delayNaranja);
  arandanos(delayArandanos); 
}

void screwdriver(){
  delayVodka=2000;
  delayNaranja=5000;
  
  vodka(delayVodka);
  naranja(delayNaranja);
}

void jinglejuice(){
  delayVodka=2000;
  delayLimon=900;
  delayArandanos=2000;
  delayNaranja=2000;
  
  vodka(delayVodka);
  naranja(delayNaranja);
  arandanos(delayArandanos);
  limon(delayLimon); 
}

void vodka(int delayVodka){
  digitalWrite(bomb1,HIGH);
  delay(delayVodka);
  digitalWrite(bomb1,LOW);
}

void limon(int delayLimon){
  digitalWrite(bomb2,HIGH);
  delay(delayLimon);
  digitalWrite(bomb2,LOW); 
}

void arandanos(int delayArandanos){
  digitalWrite(bomb3,HIGH);
  delay(delayArandanos);
  digitalWrite(bomb3,LOW);
}

void naranja(int delayNaranja){
  digitalWrite(bomb4,HIGH);
  delay(delayNaranja);
  digitalWrite(bomb4,LOW);
}


