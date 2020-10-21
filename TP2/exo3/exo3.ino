
int analogOutput = A0;

void setup() {
  Serial.begin(9600);
  pinMode(analogOutput,OUTPUT);
}

void loop() {
  for(int x=0;x<1024;x+=10){ // incrémente le voltage d'environ 0.05V toutes les 20 ms en partant de 0
    analogWrite(analogOutput,x);
    Serial.println(x);
    delay(20);
  }
  for(int x=1023;x>=0;x-=10){// décrémente le voltage d'environ 0.05V toutes les 20 ms en partant de 5V
    analogWrite(analogOutput,x);
    Serial.println(x);
    delay(20);
  }
}
