const int ledGreen = 10;
const int ledYellow = 11;
const int ledRed = 9;

//Konstanten
const int tp1 = 2;
const int tp2 = 3;
const int tp3 = 4;

//Variablen
int t1 = 0;
int t2 = 0;
int t3 = 0;

void setup()
{
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  
  pinMode(tp1, INPUT_PULLUP);
  pinMode(tp2, INPUT_PULLUP);
  pinMode(tp3, INPUT_PULLUP);
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);
}

void loop()
{t1 = digitalRead(tp1);
 t2 = digitalRead(tp2);
 t3 = digitalRead(tp3);

 if (t1 == HIGH && t2 == HIGH && t3 == LOW)
 {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == HIGH && t2 == LOW && t3 == HIGH)
 {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == HIGH && t2 == LOW && t3 == LOW)
 {
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == LOW && t2 == HIGH && t3 == HIGH)
 {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == LOW && t2 == HIGH && t3 == LOW)
 {
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == LOW && t2 == LOW && t3 == HIGH)
 {
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
 }
 else if (t1 == LOW && t2 == LOW && t3 == LOW)
 {
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
 }
 else
 {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
 }
}
