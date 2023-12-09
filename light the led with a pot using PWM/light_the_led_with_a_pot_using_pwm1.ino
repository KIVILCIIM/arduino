// In this project we will read values from pot and switch the light
//we will do "analog write and analog read"
#define potpin A0
#define led 5 // led is connected to the pin 5, potansiometer is connected to the A0

//we do not have to define every pin we use, but this way might be easier
void setup() {

}

void loop() {
  //value = value/4; //analog read might re ad a value btw 0-1023 but PMW only read btw 0-255
  int value = analogRead(potpin);
  value=map(value, 0, 1023, 0 ,255);
  analogWrite(led,value); //the value read from pot is used to switch the LED
}