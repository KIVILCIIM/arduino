//Switch the light version 1.3
// debounce: removing unwanted input noise from buttons
int switchPin=8;
int ledPin=13;
boolean lastButton= LOW;
boolean currentButton = LOW;
boolean ledOn= false;

void setup() {

pinMode(switchPin,INPUT);
pinMode(ledPin,OUTPUT);
}
boolean debounce (boolean last) //last data of switch
{
  boolean current= digitalRead(switchPin);
  if (last !=current)
  {
    delay(5); //it gives the switch enough time (5ms) to finish the rebouncing
    current = digitalRead(switchPin);
  }
  return current;
}
void loop() {
  currentButton = debounce(lastButton);

  if (lastButton == LOW && currentButton == HIGH) //if last button is low and the current is high it means that sb just pressed the button
  { 
   ledOn= !ledOn;
  
  }
  lastButton = currentButton;
  
  digitalWrite(ledPin, ledOn); //digitalWrite -> writes a value HIGH/LOW
  //ledPin-> configured as an output, its voltage will be set to ledOn value(either 5 or 0)
}
 