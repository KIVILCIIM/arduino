//change the brightness
//there will be 5 levels of brightness
int switchPin=8;
int ledPin=11;
// only some of the pins support pulse width modulation, they are marked with tilde sign 
boolean lastButton= LOW;
boolean currentButton = LOW;
int ledLevel= 0; //PWM pins values are btw 0-255
void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);

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
   ledLevel= ledLevel + 51; //the level will be increased by 51
  
  }
  lastButton = currentButton;
  if (ledLevel > 255) ledLevel==0; //we cannot output the values greater than 255
  analogWrite(ledPin, ledLevel);
}

