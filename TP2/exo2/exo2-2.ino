#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2); //indique le nombre de caractères et de lignes
}

void loop() {
  for(int y=0;y<2;y++){ // parcourt verticalement le lcd 
    for(int x=0;x<15;x++){ // parcourt horizontalement le lcd
        lcd.clear(); // nettoie le lcd des caractères précédent
      lcd.setCursor(x,y); // place le curseur pour écrire en x y
        lcd.print(':'); // affiche le caractère
      lcd.print(')'); // affiche le caractère
        delay(1000);
    }
  }
}
