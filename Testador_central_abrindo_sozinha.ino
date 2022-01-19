#define MOTOR_CHECK 2
#define POWER_CHECK_BUTTON 3
#define ERROR_LED 4
#define POWER_CHECK_LED 5

void setPinModes() {
  pinMode(MOTOR_CHECK, INPUT_PULLUP);
  pinMode(POWER_CHECK_BUTTON, INPUT_PULLUP);
  pinMode(ERROR_LED, OUTPUT);
  pinMode(POWER_CHECK_LED, OUTPUT);
}

void setup() {
  setPinModes();
}

void loop() {
  if (!digitalRead(POWER_CHECK_BUTTON)) {
    digitalWrite(POWER_CHECK_LED, HIGH);
  }

  if (!digitalRead(MOTOR_CHECK)) {
    digitalWrite(ERROR_LED, HIGH);
  }
}
