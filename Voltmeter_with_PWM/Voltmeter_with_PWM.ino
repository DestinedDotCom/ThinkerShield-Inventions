// This script was written by James Oliver 2017
// Controlling voltmeter on a PWM pin with the potentiometer 

//define variables
int voltmeterPin = 6;

int potentiometerPin = A5;

void setup() 
{
  // no setup required!

}

void loop() 
{
  // put your main code here, to run repeatedly:
  // Read LDR value
  int sensorValue = analogRead(potentiometerPin);

  //convert pin value to scale of 0 to 254 to suit PWM
  int voltmeterValue = map(sensorValue, 0, 1023, 0, 254);

  //send value to pin using analog write
  analogWrite(voltmeterPin, voltmeterValue);
}
