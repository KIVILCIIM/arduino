//RGB led (red+green+blue)
//the circuit is made of 3 pots, 3 330V resistors and an RGB led
//the colour of the RGB will be settled by potantiometers
#define green 9
#define red 11
#define blue 10

#define pot_r A0
#define pot_g A1
#define pot_b A2
//values are defined as global variables. A global variable is one that can be seen by every function in a program.
int red_value; 
int green_value;
int blue_value;
//read_value is the name of the function

void read_value(){
  red_value= analogRead(pot_r); 
  green_value= analogRead(pot_g);
  blue_value= analogRead(pot_b);
//the values read from pots are btw 0-1023, with map func values will be settled btw 0-255
  red_value=map(red_value,0,1023,0,255);
  green_value=map(green_value,0,1023,0,255);
  blue_value=map(blue_value,0,1023,0,255);
}
//the output should be defined by the pot value which is btw 0-255
void write_value(){
analogWrite(red,red_value);
analogWrite(blue,blue_value);
analogWrite(green,green_value);
}

void setup() {
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
read_value();
write_value();
}