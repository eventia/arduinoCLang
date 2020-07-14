/********************************************************
 * CH0401_Variable.ino
 * 정수 변수 사용
 ********************************************************/

void setup()
{
  Serial.begin(9600);

  char c = 'X';
  int i = 416;
  long l = 2000000000;
  float f = 3.141592;

  Serial.print("c = ");
  Serial.println(c);
  Serial.print("i = ");
  Serial.println(i);
  Serial.print("l = ");
  Serial.println(l);
  Serial.print("f = ");
  Serial.println(f);
}

void loop()
{
}
