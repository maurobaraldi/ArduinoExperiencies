int first = 2;
int last = 12;

void setup(){
  for (int i = first; i < last; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i,0);
  }
}
void loop(){
  for (int i = first; i < last; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i,0);
  }
  delay(1000);
  for (int i = first; i < last; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i,1);
  }
  delay(1000);
}
