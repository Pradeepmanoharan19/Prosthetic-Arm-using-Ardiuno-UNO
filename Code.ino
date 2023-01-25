#include <Servo.h>
#define maximum 250
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
int EMG = 2;


void setup()
{
Serial.begin(9600);
s1.attach(1);
s2.attach(2);
s3.attach(3);
s4.attach(4);
s5.attach(5);
s1.attach(1);
pinMode(EMG,INPUT);
}
void loop()
{
int input=analogRead(EMG);
if (input>maximum)
{
  s1.write(150);
  s2.write(150);
  s3.write(150);
  s4.write(150);
  s5.write(150);
  
}
else {
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);
}
}
