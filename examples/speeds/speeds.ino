#include <engine_esp.h>
motesp motor;
const int ena = 17;
const int c1 = 25;
const int c2 = 26;
int timer = 25;

void setup() {
  //this expample make the motor run while increase the speed
  motor.startPWM(ena, c1, c2, 0);
}

void loop() {
  for (int i = 0; i < 256; i++){ //increase the speed forwards
    motor.movePWM('F');
    motor.setSpeed(i);
    delay(timer);
  }
  motor.alto();
  delay(1000);
}
