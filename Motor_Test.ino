#include <AFMotor.h>
#include <Servo.h>
// DC motor on M2
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
// DC hobby servo
Servo myservo;
void setup() {
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println("Motor party!");

// turn on servo
myservo.attach(9);

// turn on motor #2
motor1.setSpeed(150);
motor1.run(RELEASE);
motor2.setSpeed(150);
motor2.run(RELEASE);
motor3.setSpeed(150);
motor3.run(RELEASE);
motor4.setSpeed(150);
motor4.run(RELEASE);
}

void loop()
{
motor1.run(FORWARD);
motor2.run(FORWARD);
motor3.run(FORWARD);
motor4.run(FORWARD);
myservo.write(180);
delay(1000);

motor1.run(BACKWARD);
motor2.run(BACKWARD);
motor3.run(BACKWARD);
motor4.run(BACKWARD);
myservo.write(-180);
delay(1000);

}
