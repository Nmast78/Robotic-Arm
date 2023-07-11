#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int pos = 0;
int pos2 = 30;
int pos3 = 45;
int pos4 = 60;
int pos5 = 70;

void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
myservo2.attach(10);
myservo3.attach(11);
myservo4.attach(12);
myservo5.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Servo 1
  for(pos = 0; pos <= 150; pos += 1) {
    myservo.write(pos);
    delay(30);
  }

  delay(1000);

  //Servo 2
  for(pos2 = 30; pos2 <= 90; pos2 += 1) {
    myservo2.write(pos2);
    delay(30);
  }

  delay(2000);

  //Servo 4
  for(pos4 = 60; pos4 >= 0; pos4 -= 1) {
    myservo4.write(pos4);
    delay(30);
  }

  delay(2000);

  //Servo 5
  for(pos5 = 70; pos5 >= 0; pos5 -= 1) {
    myservo5.write(pos5);
    delay(30);
  }

  delay(2000);
  
  //Servo 3
  for(pos3 = 45; pos3 >= 0; pos3 -= 1) {
    myservo3.write(pos3);
    delay(30);
  }

  delay(1000);

  //Servo 5
  for(pos5 = 0; pos5 <= 120; pos5 += 1) {
    myservo5.write(pos5);
    delay(30);
  }

  delay(2000);



  
  
  //Servo 3
  for(pos3 = 0; pos3 <= 45; pos3 += 1) {
    myservo3.write(pos3);
    delay(30);
  }

  delay(1000);

  //Servo 2
  for(pos2 = 90; pos2 >= 30; pos2 -= 1) {
    myservo2.write(pos2);
    delay(30);
  }

  delay(2000);
  
  //Servo 4
  for(pos4 = 0; pos4 <= 60; pos4 += 1) {
    myservo4.write(pos4);
    delay(30);
  }

  delay(1000);

  //Servo 1
  for(pos = 150; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(30);
  }

  delay(2000);





  //Servo 2
  for(pos2 = 30; pos2 <= 90; pos2 += 1) {
    myservo2.write(pos2);
    delay(30);
  }

  delay(2000);

  //Servo 4
  for(pos4 = 60; pos4 >= 0; pos4 -= 1) {
    myservo4.write(pos4);
    delay(30);
  }

  delay(2000);

  //Servo 3
  for(pos3 = 45; pos3 >= 0; pos3 -= 1) {
    myservo3.write(pos3);
    delay(30);
  }

  delay(2000);
  
  //Servo 5
  for(pos5 = 70; pos5 >= 0; pos5 -= 1) {
    myservo5.write(pos5);
    delay(30);
  }

  delay(2000);





  //Servo 3
  for(pos3 = 0; pos3 <= 45; pos3 += 1) {
    myservo3.write(pos3);
    delay(30);
  }

  delay(2000);

  //Servo 4
  for(pos4 = 0; pos4 <= 60; pos4 += 1) {
    myservo4.write(pos4);
    delay(30);
  }

  delay(2000);
  
  //Servo 5
  for(pos5 = 0; pos5 <= 70; pos5 += 1) {
    myservo5.write(pos5);
    delay(30);
  }
  
  //Servo 2
  for(pos2 = 90; pos2 >= 30; pos2 -= 1) {
    myservo2.write(pos2);
    delay(30);
  }

}
