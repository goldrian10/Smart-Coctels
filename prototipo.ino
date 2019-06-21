
const int button1Pin = 2; 
const int button2Pin = 3;
const int button3Pin = 4;
const int button4Pin = 53;
const int buttonIzqPin = 6;
const int buttonDerPin = 7;
const int buttonOkPin = 8;
const int bomb1Pin = 9;
const int bomb2Pin = 10;      
const int bomb3Pin = 11;  
const int bomb4Pin = 12;  
int activar1=0; activar2=0, activar3=0, activar4=0;
int delayVodka=0, delayLimon=0, delayArandanos=0, delayNaranja=0;

void setup() {

  pinMode(button1Pin, INPUT);      
  pinMode(button2Pin, INPUT);   
  pinMode(button3Pin, INPUT);   
  pinMode(button4Pin, INPUT);   
  pinMode(buttonIzqPin, INPUT);   
  pinMode(buttonDerPin, INPUT);   
  pinMode(buttonOkPin, INPUT);   
  pinMode(bomb1Pin, OUTPUT);   
  pinMode(bomb2Pin, OUTPUT);   
  pinMode(bomb3Pin, OUTPUT);   
  pinMode(bomb4Pin, OUTPUT);
     
 
}

void loop(){
  
  activar1=digitalRead(button1Pin);
  activar2=digitalRead(button2Pin);
  activar3=digitalRead(button3Pin);
  activar4=digitalRead(button4Pin);
  
  if(activar1==HIGH){
    cosmopolitan();
   
  }
  
  if(activar2==HIGH){
   redrooster(); 
  }
  
  if(activar3==HIGH){
   screwdriver(); 
  }
  
  if(activar4==HIGH){
   jinglejuice(); 
  }  
  
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


