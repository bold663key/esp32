const int led = 16;
const int led2 = 17;
const int led3 = 5;

const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(led, ledChannel);
  ledcAttachPin(led2, ledChannel);
  ledcAttachPin(led3, ledChannel);
}

void loop() {
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
}
