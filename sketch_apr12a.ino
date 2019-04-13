#define rele 12
#define led 13


void setup() {
  pinMode (rele, OUTPUT);
  pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (rele, HIGH);
  for (int segundos = 1; segundos < 3570; segundos++) {
    delay(500);
    digitalWrite (led, HIGH);
    delay(500);
    digitalWrite (led, LOW);
  }
  digitalWrite (rele, LOW);
  delay(30000);
}
