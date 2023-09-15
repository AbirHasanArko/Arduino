void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a = Serial.parseInt();
  Serial.println(a);
  delay(1000);
  
  //float a = Serial.parseFloat();
  //Serial.println(a);
  //delay(1000);
  
  //char a = Serial.read();
  //Serial.println(a);
  //delay(1000);
  
  //String a = Serial.readString();
  //Serial.println(a);
  //delay(1000);
}
