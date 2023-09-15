// Variable Types:
  // 1. int : 1, 2, 3, 4, 5, ....
  // 2. float : 3.14, 2.71, ....
  // 3. char : 'a', 'b', 'c', ....
  // 4. string : "Hello World", "Arduino", ....

// Variable Declaration: 
  // data_type variable_name;

void setup()
{
  Serial.begin(9600);
  int num = 3;
  float pi;
  pi = 3.1416;
  char letter = 'a';
  char str1[3] = {'b','c'};
  char str2[8] = "Arduino";
  char str3[] = "Hello World";

  Serial.println(num);
  Serial.println(pi);
  Serial.println(letter);
  Serial.println(str1);
  Serial.println(str2);
  Serial.println(str3);
}
void loop()
{

}
