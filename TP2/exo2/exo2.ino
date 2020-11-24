#include <LiquidCrystal.h>

int LED4V = 8;
int LED3V = 9;
int LED0V = 10;
int analogInput = 0;

LiquidCrystal lcd(12, 13, 7, 6, 5, 4);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(LED4V,OUTPUT);
  pinMode(LED3V,OUTPUT);
  pinMode(LED0V,OUTPUT);
  pinMode(analogInput,INPUT);
}

void loop() {
  // on utilise la règle de 3 pour simuler un voltmètre
  float volt = analogRead(analogInput)/1023.0;
  volt=volt*5;
  
  // si on dépasse 0V on allume la led verte sinon elle est éteinte
  if(volt>0){
    digitalWrite(LED0V,HIGH);
  }else{
    digitalWrite(LED0V,LOW);
  }

  // si on dépasse 3V on allume la led orange sinon elle est éteinte
  if(volt>3){
    digitalWrite(LED3V,HIGH);
  }else{
    digitalWrite(LED3V,LOW);
  }

  // si on dépasse 4V on allume la led rouge sinon elle est éteinte
  if(volt>4){
    digitalWrite(LED4V,HIGH);
  }else{
    digitalWrite(LED4V,LOW);
  }
  
  // on affichage le valeur simuler
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(volt);
  lcd.print(" V");
  Serial.println(volt);
  delay(1000);
}
