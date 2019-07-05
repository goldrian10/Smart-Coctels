#include <LiquidCrystal.h>

int buttonIzqPin = 4;
int buttonDerPin = 5;
int buttonOkPin = 6;
int selector=1;
int delayVodka=0, delayLimon=0, delayArandanos=0, delayNaranja=0;
int bomb1=A1, bomb2=A2, bomb3=A3, bomb4=A4;

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // RS ENABLE D4 D5 D6 D7

void setup(){
   lcd.begin(16, 2);
   pinMode(buttonIzqPin, INPUT);   
   pinMode(buttonDerPin, INPUT);   
   pinMode(buttonOkPin, INPUT);
   pinMode(bomb1,OUTPUT);
   pinMode(bomb2,OUTPUT);
   pinMode(bomb3,OUTPUT);
   pinMode(bomb4,OUTPUT);  
  
  lcd.setCursor (5,0);      // empezamos con una bienvenida la cual solo se repetira una sola vez.

  lcd.print("Smart");

  lcd.setCursor (4,1);

  lcd.print("Coctels");

  delay (2000);

  

}//fin del set up

void loop(){
  
  delay(70);//delay de resfrescamiento
  lcd.clear();
  int buttonIzq=digitalRead(buttonIzqPin);
  int buttonDer=digitalRead(buttonDerPin);
  int buttonOk=digitalRead(buttonOkPin);
  
  if(buttonDer==HIGH){
   selector++;
   if(selector>4){
    selector=1;
    
   }
   delay(700);
  }
  
  if(buttonIzq==HIGH){
    selector--;
    if(selector<1){
     selector=4; 
    }
    delay(700);
  }
  
  switch(selector){
   case 1:
       delayVodka=2000;
       delayLimon=900;
       delayArandanos=5000;
       cosmopolitan(buttonOk, delayVodka, delayLimon, delayArandanos);
    break;
    
   case 2:
        delayVodka=2000;
        delayArandanos=5000;
        delayNaranja=5000;
        redrooster(buttonOk, delayVodka, delayArandanos, delayNaranja);
         
    break;
    
    
   case 3:
        delayVodka=2000;
        delayNaranja=5000;
        screwdriver(buttonOk, delayVodka, delayNaranja);
    break;
    
    
   case 4:
        delayVodka=2000;
        delayLimon=900;
        delayArandanos=2000;
        delayNaranja=2000;
        jinglejuice(buttonOk, delayVodka, delayLimon, delayArandanos, delayNaranja);
      
    break; 
    
  }//fin del switch
  
}//fin loop

void cosmopolitan(int buttonOk, int delayVodka, int delayLimon, int delayArandanos){

 lcd.print("  COSMOPOLITAN");
    if(buttonOk==HIGH){
     vodka(1);
     limon(1); 
     arandanos(1);
     delay(delayLimon);
     limon(0);
     delay(delayVodka-delayLimon);
     vodka(0);
     delay(0);
     arandanos(0);
     delay(2000);
    }
}

void redrooster(int buttonOk, int delayVodka, int delayArandanos, int delayNaranja){

    lcd.print("  RED ROOSTER");
    if(buttonOk==HIGH){
     vodka(1);
     naranja(1); 
     arandanos(1);
     delay(delayVodka);
     vodka(0);
     delay(delayNaranja-delayVodka);
     naranja(0);
     delay(0);
     arandanos(0);
     delay(2000);
    }
}

void screwdriver(int buttonOk, int delayVodka, int delayNaranja){

    lcd.print("  SCREWDRIVER");
    if(buttonOk==HIGH){
     vodka(1);
     naranja(1); 
     delay(delayVodka);
     vodka(0);
     delay(delayNaranja-delayVodka);
     naranja(0);
     delay(2000);
    }
}

void jinglejuice(int buttonOk, int delayVodka, int delayLimon, int delayArandanos, int delayNaranja){

  lcd.print("  JINGLE JUICE");
    if(buttonOk==HIGH){
     vodka(1);
     naranja(1); 
     arandanos(1);
     limon(1);
     
     delay(delayLimon);
     limon(0);
     delay(1000);
     vodka(0);
     delay(2000);
     naranja(0);
     delay(1);
     arandanos(0);
     delay(2000);
    }
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


