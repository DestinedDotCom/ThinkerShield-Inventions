// This script was written by James Oliver 2017
// It turns the LEDs into the same light effect as a cylon (off battlestar gallectica)

// declare variables for leds

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;

void setup() 
{
  // Setup LED pins as outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:

  //turn outside lights on
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);

  //pause before next set of lights
  delay(200);

  //turn outside lights off and next pair of lights on
  digitalWrite(led1, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);

  //pause before next set of lights
  delay(200);

  //turn off last pair of lights off and inner pair of lights on
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);

  //pause before next set of lights
  delay(200);

  //turn inside lights off and next pair of lights on
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);

  //pause before next set of lights
  delay(200);

}
