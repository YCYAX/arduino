const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
}

void loop()
{
  blinkLED(a,10);
  blinkLED(b,10);
  blinkLED(c,10);
  blinkLED(d,10);
  blinkLED(e,10);
}

void blinkLED(int pin,int duration)
{
  digitalWrite(pin,HIGH);
  delay(duration);
  digitalWrite(pin,LOW);
  delay(duration);  
}
