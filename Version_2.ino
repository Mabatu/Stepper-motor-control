uint8_t sequence[4] = { 0b10000000, 0b00100000, 0b01000000, 0b00010000 };
void setup() {
  DDRD = 0b11110000;
}
void loop() {
  for (int i = 3; i >= 0; i--) {
    PORTD = sequence[i];
    delay(2);
  }
}
