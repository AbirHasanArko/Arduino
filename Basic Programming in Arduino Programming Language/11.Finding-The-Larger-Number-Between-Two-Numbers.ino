void setup()
{
  Serial.begin(9600);
}

void loop()
{
  	int number1 = 10;
    int number2 = 12;
    
    if(number1 > number2){
      Serial.print(number1);
      Serial.println(" is bigger");
    }
    else{
      Serial.print(number2);
      Serial.println(" is bigger");
    }
  	delay(1000);
}
