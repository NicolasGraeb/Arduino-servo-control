#include <Servo.h>//library to control serovo_motor
Servo servo;//initialize Servo name
#define potentiometer A0//define potentiometer control pin
int servo_val;
int pot_val;


void setup()
{
  pinMode(potentiometer, INPUT);//set potentiometer as input
  servo.attach(9);//attach servo to pin 9 .You can controll servo only with pins which are using PWM signal.
}

void loop()
{
  pot_val=analogRead(potentiometer);//Read values form potentiometer pin
  servo_val=map(pot_val,0,1023,0,180);// map function re-maps a number from low to high to another values. For example if u set on potentiometer 1023 servo will turn to 180 degrees
  servo.write(servo_val);//move servo for servo_val value
  delay(10);
}
