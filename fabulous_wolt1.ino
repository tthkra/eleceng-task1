int rowPins[] = {3, 4, 5, 6, 7};
int colPins[] = {A5, A4, A3, A2, A1};


void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(rowPins[i], OUTPUT);
  }

  for (int i = 0; i < 5; i++) {
    pinMode(colPins[i], OUTPUT);
  }
}

void loop() {

  for (int row = 0; row < 5; row++) {
    for (int col = 0; col < 5; col++) {

      digitalWrite(rowPins[row], HIGH);
      digitalWrite(colPins[col], LOW);

      delay(100);

      digitalWrite(rowPins[row], LOW);
      digitalWrite(colPins[col], HIGH);
    }
  }
}