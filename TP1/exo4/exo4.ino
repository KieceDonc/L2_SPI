/*
  Reminder : 
  the goal of this exercice is to simulate an intersection light with 2 light, one for car and another for pedestrians
  loop for car:
    3s green if pedestrians button hasn't been press else pass to red
    1s orange
    3s red
*/
int pedestrians_button = 7;
int pedestrians_green = 9;
int pedestrians_red = 8;

int car_green = 10;
int car_orange = 11;
int car_red = 12;

boolean is_car_light_green = true

void setup(){
  pinMode(pedestrians_button, INPUT);
  pinMode(pedestrians_green,OUTPUT);
  pinMode(pedestrians_red,OUTPUT);
  
  pinMode(green,OUTPUT)
  pinMode(orange,OUTPUT)
  pinMode(red,OUTPUT)
  
  // https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/
  attachInterrupt(digitalPinToInterrupt(pedestrians_button), pedestrians_button_on_press(), RISING);
}

boolean pedestrians_button_pressed = false

void loop(){
  //car_green start
  // we reset bool  ( important, cuz if you don't you will have the last loop bool value )   
  pedestrians_button_pressed = false 
  digitalWrite(pedestrians_green,LOW);
  digitalWrite(pedestrians_red,HIGH);
  
  digitalWrite(car_orange,LOW);
  digitalWrite(car_red,LOW);
  digitalWrite(car_green,HIGH);

  delay(3000);
  
  //car_green end
  
  // checking if a pedestrians as pressed the button
  // if pedestrians has been press it mean that car light are already at orange-red light
  if(!pedestrians_button_pressed){
    // pedestrians hasn't been press the button, we need change car light to orange and then red.
    car_goes_red();
  }
  
  delay(3000):
  //car_red end
}

void pedestrians_button_on_press(){
  // checking if user don't spam pedestrians button 
  if(!pedestrians_button_pressed){
    pedestrians_pressed=true;
    car_goes_red()
  }
}


void car_goes_red(){
  //car_orange start
  
  digitalWrite(car_orange,LOW)
  digitalWrite(car_orange,HIGH)
  
  delay(1000)
  
  //car_orange end
  //car_red start
  
  digitalWrite(car_orange,LOW)
  digitalWrite(car_red,HIGH)
  //
  pedestrians_goes_green()
}

void pedestrians_goes_green(){
  digitalWrite(pedestrians_red,LOW);
  digitalWrite(pedestrians_green,HIGH);
}

