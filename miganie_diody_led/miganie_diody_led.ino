const int led = 5;

void setup(){
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
