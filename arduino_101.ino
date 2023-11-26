/*
26/11/23
my first arduino program
*/ 
// every program has two main parts
int ledPin=13; //Specifies which pin on the Arduino the LED is connected to
// void set up and void loop
void setup() {
  // put your setup code here, to run once:
  //all the pins in arduino can be both input and output
  pinMode(ledPin,OUTPUT); //pinmode has two arguments, pin and input/output
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000); //1000 is one second
  digitalWrite(ledPin, LOW);
  delay(1000);

}
