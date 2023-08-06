#define LEDG 2
#define LEDY 27
#define LEDL 25

void setup() {
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(LEDL, OUTPUT);
}

void loop() {
  digitalWrite(LEDL, HIGH);
  delay(6000);
  digitalWrite(LEDL, LOW);
  delay(800);
  digitalWrite(LEDY, HIGH);
  delay(2000);
  digitalWrite(LEDY, LOW);
  delay(800);
  digitalWrite(LEDG, HIGH);
  delay(7000);
  digitalWrite(LEDG, LOW);
  delay(800);
  digitalWrite(LEDY, HIGH);
  delay(2000);
  digitalWrite(LEDY, LOW);
  delay(800);
}