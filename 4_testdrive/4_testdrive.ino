#include <SoftwareSerial.h>

SoftwareSerial hc06(6,7);
char ch;
const int dirPin1 = 2;
const int stepPin1 = 3;
const int dirPin2 = 4;
const int stepPin2 = 5;
const int stepsPerRevolution = 200;
int del = 2000;

void setup(){
  //Initialize Serial Monitor
  Serial.begin(9600);
  hc06.begin(9600);
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
}

void mov(int dir1, int dir2, float spd) {
  del = del*spd;

  if (dir1==1) {
    digitalWrite(dirPin1, HIGH);
  }
  else if (dir1 ==0) {
    digitalWrite(dirPin1, LOW);
  }
  if (dir2==0) {
    digitalWrite(dirPin2, HIGH);
  }
  else if (dir2 ==1) {
    digitalWrite(dirPin2, LOW);
  }
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin1, HIGH);
    digitalWrite(stepPin2, HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin1, LOW);
    digitalWrite(stepPin2, LOW);
    delayMicroseconds(del);
  }
}

void actuate(char cha) {
  if (cha == 'f') {
    mov(1, 1, 1);
  }
  else if (cha =='r') {
    mov(1, 0, 1);
  }
  else if (cha == 'b') {
    mov(0, 0, 1);
  }
  else if (cha == 'l') {
    mov(0, 1, 1);
  }
  else if (cha == 's') {
    mov(2, 2, 1.2);
  }
  else if (cha == 'q') {
    mov(2, 2, 0.8);
  }
  else if (cha == 'h') {
    mov(0, 0, 0);
    del = 2000;
  }
}

void checkstart() {
  if (hc06.available()){
    ch = char(hc06.read());
    Serial.println(ch);
    actuate(ch);
  }
  if (ch != 'h') {
    mov(2, 2, 1);
  }
}

void loop(){
  checkstart();
}
