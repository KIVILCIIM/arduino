//reading the state of a Pot
#define potpin A0
int value =0;
void setup() {
  Serial.begin(9600); //we neeed to begin a communication btw the arduino and comp, so we use serial.begin
  // 9600 is the speed of the communication
  Serial.print("reading pot's value"); //this message will be seen on the monitor
}
void loop() {
  value= analogRead(potpin);  // we will read a value from the analog pin, we use analog read
  //we have to give the name of the pin that will be used
  // values are btw 0-1024 because arduino uses 10 bits system for the analog values
  float voltage= (5.00/1024.00)*value; //to see the voltage value directly on the serial monitor, we need to do this basic operation
  Serial.println(voltage); 
  delay(300);
}
