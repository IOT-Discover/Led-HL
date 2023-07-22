// C++ code
//
void setup()
{
	pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1000); // Delay a little bit to improve simulation performance
  digitalWrite(12, LOW);
  delay(1000);
}