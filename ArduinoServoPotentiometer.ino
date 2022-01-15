#include <Servo.h>
Servo servo;
#define potentiometer A0
int servo_val;
int pot_val;


void setup()
{
  pinMode(potentiometer, INPUT);
  servo.attach(9);
}

void loop()
{
  pot_val=analogRead(potentiometer);
  servo_val=map(pot_val,0,1023,0,180);
  servo.write(servo_val);
  delay(10);
}
