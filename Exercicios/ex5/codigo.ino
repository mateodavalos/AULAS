int buttonPin = 3;
int ledPin = 2;
int estadoButton = 0;


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  
}

void loop()
{
  estadoButton = digitalRead (buttonPin);
  if ( estadoButton == HIGH ) { 
    digitalWrite(2, LOW);
    delay(100);
  }
  else { 
    digitalWrite (2, HIGH ); 
  }
}
