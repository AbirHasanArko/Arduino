void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int number = -15;
  if(number > 0){
  	Serial.print(number); Serial.println(" is positive");
  }
  else if(number == 0){
  	Serial.print(number); Serial.println(" is zero");
  }
  else{
  	Serial.print(number); Serial.println(" is negative");
  }
}
