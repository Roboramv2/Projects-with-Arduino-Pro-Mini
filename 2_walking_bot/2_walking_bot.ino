#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int angle = 0;

void wiggle() {
  servo1.write(45);
  delay(200);
  servo2.write(45);
  delay(200);
  servo3.write(-45);
  delay(200);
  servo4.write(-45);
  delay(200);
  servo1.write(-45);
  delay(200);
  servo2.write(-45);
  delay(200);
  servo3.write(45);
  delay(200);
  servo4.write(45);
  delay(200);
}

void setup() {
  servo1.attach(3);
  servo1.write(angle);
  delay(15);
  servo2.attach(5);
  servo2.write(angle);
  delay(15);
  servo3.attach(6);
  servo3.write(angle);
  delay(15);
  servo4.attach(9);
  servo4.write(angle);
  delay(15);
}

void loop() 
{ 
 wiggle();
 delay(500);
}
