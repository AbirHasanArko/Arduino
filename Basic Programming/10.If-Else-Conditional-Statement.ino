void setup()
{
  Serial.begin(9600);
  Serial.println("Type 's' for sunny day and 'r' for rainy day");
}

void loop()
{
  if(Serial.available() > 0){
  	char data = Serial.read();
    if(data == 'r' || data =='R'){
    	Serial.println("Today is rainy day");
    }
    else if(data == 's' || data == 'S'){
    	Serial.println("Today is sunny day");
    }
    else{
    	Serial.println("Invalid Character");
    }
  }
}
