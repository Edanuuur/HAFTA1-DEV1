#define kırmızı 2
#define turuncu 3
#define sarı 4
#define yesil 5
#define mavi 6


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(500); 
  digitalWrite(3, HIGH);
  delay(500); 
  digitalWrite(4, HIGH);
  delay(500); 
  digitalWrite(5, HIGH);
  delay(500); 
  digitalWrite(6, HIGH);
  delay(500); 
  digitalWrite(6, LOW);
  delay(500); 
  digitalWrite(5, LOW);
  delay(500); 
  digitalWrite(4, LOW);
  delay(500); 
  digitalWrite(3, LOW);
  delay(500); 
  digitalWrite(2, LOW);
  delay(500); 
}