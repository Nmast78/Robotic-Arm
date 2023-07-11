#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;

int pos = 0;
int pos2 = 0;
int pos3 = 0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
}

void loop() {
  // Servo 1
  for(pos = 0; pos <= 150; pos += 1) {
    myservo.write(pos);
    delay(15);
  }

  for(pos = 150; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }

  // Servo 2
  for(pos2 = 50; pos2 <= 120; pos2 += 1) {
    myservo2.write(pos2);
    delay(15);
  }

  for(pos2 = 120; pos2 >= 50; pos2 -= 1) {
    myservo2.write(pos2);
    delay(15);
  }

  //Servo 3
  for(pos3 = 50; pos3 <= 120; pos3 += 1) {
    myservo3.write(pos3);
    delay(15);
  }

  for(pos3 = 120; pos3 >= 50; pos3 -= 1) {
    myservo3.write(pos3);
    delay(15);
  }
}
