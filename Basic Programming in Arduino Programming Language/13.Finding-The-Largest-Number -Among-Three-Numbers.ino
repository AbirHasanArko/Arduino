void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a, b, c;
  a = 10; b = 15; c = 18;
  if(a > b && a > c){
  	Serial.print(a); Serial.print(" is grater");
  }
  if(b > a && b > c){
  	Serial.print(b); Serial.print(" is grater");
  }
  if(c > b && c > a){
  	Serial.print(c); Serial.print(" is grater");
  }
  Serial.println("");
  delay(1000);
}
