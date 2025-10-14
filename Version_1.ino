#define PHASE_1_A 4
#define PHASE_1_B 5
#define PHASE_2_A 6
#define PHASE_2_B 7

#define DELAY 2

void setup() {
  pinMode(PHASE_1_A, OUTPUT);
  pinMode(PHASE_1_B, OUTPUT);
  pinMode(PHASE_2_A, OUTPUT);
  pinMode(PHASE_2_B, OUTPUT);
}
void loop() {
  digitalWrite(PHASE_1_A, 1);
  digitalWrite(PHASE_1_B, 0);
  digitalWrite(PHASE_2_A, 0);
  digitalWrite(PHASE_2_B, 0);
  delay(DELAY);

  digitalWrite(PHASE_1_A, 0);
  digitalWrite(PHASE_1_B, 0);
  digitalWrite(PHASE_2_A, 1);
  digitalWrite(PHASE_2_B, 0);
  delay(DELAY);

  digitalWrite(PHASE_1_A, 0);
  digitalWrite(PHASE_1_B, 1);
  digitalWrite(PHASE_2_A, 0);
  digitalWrite(PHASE_2_B, 0);
  delay(DELAY);

  digitalWrite(PHASE_1_A, 0);
  digitalWrite(PHASE_1_B, 0);
  digitalWrite(PHASE_2_A, 0);
  digitalWrite(PHASE_2_B, 1);
  delay(DELAY);
