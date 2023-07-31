void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int year = 2004;
  if(year%4 == 0 && year%100 != 0 || year%400 == 0){
  	Serial.print(year); Serial.println(" is leap year");
  }
  else{
  	Serial.print(year); Serial.println(" is not leap year");
  }
}
