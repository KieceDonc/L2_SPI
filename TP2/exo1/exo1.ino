int LED4V = 13;
int LED3V = 12;
int LED0V = 11;
int analogInput = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED4V,OUTPUT);
  pinMode(LED3V,OUTPUT);
  pinMode(LED0V,OUTPUT);
  pinMode(analogInput,INPUT);
}

void loop() {
  float volt = analogRead(analogInput)/1023.0;
  volt=volt*5;
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
  Serial.println(volt);
  delay(1000);
}
