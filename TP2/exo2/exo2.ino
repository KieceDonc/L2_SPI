#include <LiquidCrystal.h>

int LED4V = 8;
int LED3V = 9;
int LED0V = 10;
int analogInput = 0;


  // initialisation, on définit les ports pour RS, E et D4 à D7
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(LED4V,OUTPUT);
  pinMode(LED3V,OUTPUT);
  pinMode(LED0V,OUTPUT);
  pinMode(analogInput,INPUT);
}

void loop() {
  float volt = analogRead(analogInput)/1023.0;
  volt=volt*5;
  lcd.setCursor(0, 0);
  lcd.print(volt);
  Serial.println(volt);
  if(volt>0){
    digitalWrite(LED0V,HIGH);
  }else{
    digitalWrite(LED0V,LOW);
  }

  if(volt>3){
    digitalWrite(LED3V,HIGH);
  }else{
    digitalWrite(LED3V,LOW);
  }

  if(volt>4){
    digitalWrite(LED4V,HIGH);
  }else{
    digitalWrite(LED4V,LOW);
  }
  delay(1000);
}
