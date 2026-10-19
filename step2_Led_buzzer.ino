#define RED 25
#define GREEN 26
#define BUZZER 27

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(GREEN, HIGH); delay(1000);
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH); delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(BUZZER, HIGH); delay(300);
  digitalWrite(BUZZER, LOW); delay(1000);
}