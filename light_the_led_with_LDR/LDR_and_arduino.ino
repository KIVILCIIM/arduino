//the resistance level of the LDR changes with the light level
//LDR can be used to detect the time level
//while making the circuit a 10kohm resistor is needed for LDS's connection
#define led 3
void setup() {
  pinMode(led,OUTPUT); // in the circuit LED is connected to the pin 3
  //we want our led to turn on with the input taken from pin 3, it will behave as an output
  Serial.begin(9600);// the values will be seen also on the computer's screen
}
void loop() {
 int light_level= analogRead(A0); //in our circuit LDR and 10k resistor is connected to the pin analog0
// Since we do not know the light level in the room we will take the value from the lds and the value will be btw 0-1023
Serial.print(light_level);
delay(50); //since data transfer started we add delay to see them clearly
if(light_level<900){
digitalWrite(led,LOW);//led defined as an output with pinmode commend, digitalWrite will determine wheter it will be 5 or 0
}
if(light_level>900){
digitalWrite(led,HIGH);
}}
