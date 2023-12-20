//RGB led (red+green+blue)
//the circuit is made of 3 pots, 3 330V resistors and an RGB led
//the colour of the RGB will be settled by potantiometers
#define green 9
#define red 11
#define blue 10
#define pot_r A0
#define pot_g A1
#define pot_b A2
void setup() {
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  int red_value= analogRead(pot_r); 
  int green_value= analogRead(pot_g);
  int blue_value= analogRead(pot_b);
  red_value=map(red_value,0,1023,0,255);
  green_value=map(green_value,0,1023,0,255);
  blue_value=map(blue_value,0,1023,0,255);
  analogWrite(red,red_value);
  analogWrite(blue,blue_value);
  analogWrite(green,green_value);
}
