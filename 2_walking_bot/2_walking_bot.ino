#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void cali() {
  servo1.write(80);
  delay(200);
  servo2.write(90);
  delay(200);
  servo3.write(80);
  delay(200);
  servo4.write(90);  
  delay(200);
}

void forw() {
  servo3.write(0);
  delay(150);
  servo2.write(180);
  delay(150);
  servo1.write(180);
  delay(150);
  servo4.write(0);
  delay(150);
  cali();
  delay(500);
}

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  cali();
}

void loop() 
{ 
 forw();
}
