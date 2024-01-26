const int led = 5;
const int button = 4;

int buttonState = 0;

void setup(){
  Serial.begin(115200);

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  buttonState = digitalRead(button);
  Serial.println(buttonState);

  if(buttonState == HIGH){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
}