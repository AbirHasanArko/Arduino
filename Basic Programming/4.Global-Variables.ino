int num = 2; // num is a global variable
             // num will be recognized by both setup and loop function
void setup()
{
  Serial.begin(9600);
  Serial.println(num);
}

void loop()
{
	Serial.println(num);
}
