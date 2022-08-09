#include <Servo.h>



#define ServoA 8
#define ServoB 9
#define ServoC 10


Servo ServA;
Servo ServB;
Servo ServC;
void setup() {
    ServA.attach(ServoA);
    ServA.write(90);
    ServB.attach(ServoB);
    ServB.write(90);
    ServC.attach(ServoC);
    ServC.write(90);
    Serial.begin(9600);
    pinMode(7, OUTPUT);
    digitalWrite(7, HIGH);
}

void loop() {
  apresentacao();
  BluetooControl();
  }


void Motores(int A, int B, int C){
  ServA.write(A);
  ServB.write(B);
  ServC.write(C);
  
}



#define delaymudar 1750
void apresentacao(){
  for(int i=0;i<90;i++){
    Motores(i,i,i);
    delay(30);
  }
  delay(delaymudar);
  Motores(90,90,90);
  delay(delaymudar);
  for(int i=90;i<180;i++){
    Motores(i,i,i);
    delay(30);
  }
  delay(delaymudar);
  for(int i=180;i>0;i--){
    Motores(i,i,i);
    delay(30);
  }
  delay(delaymudar);
//---------------------------
  for(int i=0;i<90;i++){
    Motores(i,i,i);
    delay(10);
  }
  delay(delaymudar);
  Motores(90,90,90);
  delay(delaymudar);
  for(int i=90;i<180;i++){
    Motores(i,i,i);
    delay(10);
  }
  delay(delaymudar);
  for(int i=180;i>0;i--){
    Motores(i,i,i);
    delay(10);
  }
  delay(delaymudar);
//--------------------------
  for(int i=0;i<90;i++){
    Motores(i,i,i);
    delay(5);
  }
  delay(delaymudar);
  Motores(90,90,90);
  delay(delaymudar);
  for(int i=90;i<180;i++){
    Motores(i,i,i);
    delay(5);
  }
  delay(delaymudar);
  for(int i=180;i>0;i--){
    Motores(i,i,i);
    delay(5);
  }
  delay(delaymudar);
//--------------------------
  for(int i=0;i<90;i++){
    Motores(i,i,i);
    delay(1);
  }
  delay(delaymudar);
  Motores(90,90,90);
  delay(delaymudar);
  for(int i=90;i<180;i++){
    Motores(i,i,i);
    delay(1);
  }
  delay(delaymudar);
  for(int i=180;i>0;i--){
    Motores(i,i,i);
    delay(1);
  }
  delay(delaymudar);
//--------------------------
  Motores(0,0,180);
  delay(300);
  Motores(0,0,0);
  delay(300);
  Motores(0,0,180);
  delay(300);
  Motores(0,0,0);
  delay(1450);
//--------------------------
  Motores(90,0,90);
  delay(400);
  Motores(90,180,90);
  delay(400);
  Motores(90,0,90);
  delay(400);
  Motores(90,180,90);
  delay(400);
  Motores(90,0,90);
  delay(400);
  Motores(90,180,90);
  delay(1450);
//--------------------------

  }
