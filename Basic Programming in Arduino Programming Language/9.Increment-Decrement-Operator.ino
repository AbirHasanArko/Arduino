void setup()
{
  Serial.begin(9600);
  int i = 5;
  Serial.println(i);
  i = i + 5;
  Serial.println(i);
  i = i + 1;
  Serial.println(i);
  i++;    // same as i = i + 1;
  Serial.println(i);
  i--;    // same as i = i - 1;
  Serial.println(i);
}

void loop()
{

}
