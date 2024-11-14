int state = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.begin(9600);
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  if (value > 380) {
    Serial.println("Dry soil needing water");
    if (state == 0) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    state = 1;
  } else {
    Serial.println("else...");
    if (state == 1) {
      digitalWrite(LED_BUILTIN, LOW);
    }
    state = 0;
  }
  delay(2000);
  Serial.println(state);
}
