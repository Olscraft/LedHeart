//https://github.com/Olscraft/LedHeart
//by Olscraft
//for ttiny 13
#define LEDPIN 1
#define LEDPIN1 0
int brightness = 0;
int fadeAmount = 5;
void setup() {
  //  Pins initialization \\
  pinMode(LEDPIN, OUTPUT);
  pinMode(LEDPIN1, OUTPUT);
}
void loop() {
  analogWrite(LEDPIN, brightness);
  analogWrite(LEDPIN1, brightness);
  //  Brightness control  \\
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
