#include <Servo.h>

int feedbackmeasurement = 0, movement = 0;

Servo servo_;

void setup()
{
  pinMode(A4, INPUT);
  servo_.attach(6);

}

void loop()
{
  feedbackmeasurement = analogRead(A4);
  movement = map(feedbackmeasurement, 0, 1023, 0, 180);
  servo_.write(movement);
  delay(5);
}