//switching the light
int switchPin=8;
int ledPin=13;
boolean lastButton= LOW;
boolean ledOn= false;

void setup() {
  // put your setup code here, to run once:
pinMode(switchPin,INPUT);
pinMode(ledPin,OUTPUT);
}

void loop() {
  //digitalread means either 5 or 0
  if (digitalRead(switchPin) == HIGH && lastButton== LOW){ //we are checking if pin is high RIGHT NOW and it was not high before
    //switchPin high=5V
   ledOn= !ledOn;
   lastButton = HIGH;

  }
  else 
  {
    lastButton = digitalRead(switchPin); 
  
      }
  digitalWrite(ledPin, ledOn); //digitalWrite -> writes a value HIGH/LOW
  //ledPin-> configured as an output, its voltage will be set to ledOn value(either 5 or 0)
}
 