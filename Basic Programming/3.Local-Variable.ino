void setup()
{
  Serial.begin(9600);
  int num1 = 3;  // num1 is a local variable
  Serial.println(num1);  // num1 will work only on setup function
}
void main()
{
  int num2 = 4;  // num2 is a local variable
  Serial.println(num2); // num12 will work only on loop function
}
