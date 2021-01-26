int trigPin = 9;
int echoPin = 8;
int ledPinkirmizi = 4;
int ledPinyesil = 5;

int buzzerPin = 6;

long sure;
long mesafe;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPinkirmizi, OUTPUT);
  pinMode(ledPinyesil, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2)/29.1;

  if(mesafe <= 10)
  {
    digitalWrite(ledPinyesil, LOW);
    digitalWrite(ledPinkirmizi, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else if(mesafe <= 15)
  {
    digitalWrite(ledPinyesil, HIGH);
    digitalWrite(ledPinkirmizi, LOW);
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(ledPinkirmizi, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  
  
    
  }
