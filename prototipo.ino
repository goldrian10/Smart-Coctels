
#include <LiquidCrystal.h>
int buttonIzqPin = A0;
int buttonDerPin = A6;
int buttonOkPin = A5;
int selector=1;
int delayVodka=0, delayLimon=0, delayArandanos=0, delayNaranja=0;
int bomb1=6, bomb2=7, bomb3=8, bomb4=9;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS ENABLE D4 D5 D6 D7

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
   pinMode(buttonIzqPin, INPUT);   
   pinMode(buttonDerPin, INPUT);   
   pinMode(buttonOkPin, INPUT);
   pinMode(bomb1,OUTPUT);
   pinMode(bomb2,OUTPUT);
   pinMode(bomb3,OUTPUT);
   pinMode(bomb4,OUTPUT);  
  lcd.print("SMART COCTELS");
    
}

void loop(){
  
  delay(2000);
  lcd.clear();
  int buttonIzq=digitalRead(buttonIzqPin);
  int buttonDer=digitalRead(buttonDerPin);
  int boton=0;
  if(buttonDer==HIGH){
   selector++;
   boton=1; 
   if(selector>4){
     selector=1;
   }
  }
  if(buttonIzq==HIGH){
    selector--;
    boton=2;
    if(selector<1){
     selector=4; 
    }
  }
  
  Serial.println(selector);
  Serial.println(boton);
  switch(selector){
   case 1:
    lcd.print("COSMOPOLITAN");
    cosmopolitan();
    break;
   case 2:
    lcd.print("RED ROOSTER");
    redrooster();
    break;
   case 3:
    lcd.print("SCREWDRIVER");
    screwdriver();
    break;
   case 4:
    lcd.print("JINGLE JUICE");
    jinglejuice();
    break; 
    
  }
  
}//fin loop

void cosmopolitan(){
 delayVodka=2000;
 delayLimon=900;
 delayArandanos=5000;
 
 vodka(1);
 limon(1); 
 arandanos(1);
 delay(delayLimon);
 limon(0);
 delay(delayVodka-delayLimon);
 vodka(0);
 delay(delayArandanos-delayLimon-delayVodka);
 arandanos(0);
}

void redrooster(){
  delayVodka=2000;
  delayArandanos=5000;
  delayNaranja=5000;
 
 vodka(1);
 naranja(1); 
 arandanos(1);
 delay(delayVodka);
 vodka(0);
 delay(delayNaranja-delayVodka);
 naranja(0);
 delay(delayArandanos-delayNaranja-delayVodka);
 arandanos(0);
}

void screwdriver(){
  delayVodka=2000;
  delayNaranja=5000;
  
   vodka(1);
   naranja(1); 
   delay(delayVodka);
   vodka(0);
   delay(delayNaranja-delayVodka);
   naranja(0);
}

void jinglejuice(){
  delayVodka=2000;
  delayLimon=900;
  delayArandanos=2000;
  delayNaranja=2000;
  
 vodka(1);
 naranja(1); 
 arandanos(1);
 limon(1);
 
 delay(delayLimon);
 limon(0);
 delay(delayVodka-delayLimon);
 vodka(0);
 delay();
 naranja(0);
 delay(1);
 arandanos(0);
}

void vodka(int estado){
  if(estado==1){
    digitalWrite(bomb1,HIGH);
  }
  else{
    digitalWrite(bomb1,LOW);
  }
}

void limon(int estado){
  if(estado==1){
    digitalWrite(bomb2,HIGH);
  }
  else{
    digitalWrite(bomb2,LOW);
  } 
}

void arandanos(int estado){
  if(estado==1){
    digitalWrite(bomb3,HIGH);
  }
  else{
    digitalWrite(bomb3,LOW);
  }
}

void naranja(int estado){
  if(estado==1){
    digitalWrite(bomb4,HIGH);
  }
  else{
    digitalWrite(bomb4,LOW);
  }
}


