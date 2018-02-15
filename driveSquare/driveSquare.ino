
#include <Servo.h>

Servo carServo; // Create a Servo Object

#define pwmToMotor 2        // Defining the PWM pin to run the motor
#define servoPin 48         // Defining the servo control pin

void      driveSquare();    // Drive square function initial definition to drive a square
void      carStop();        // Stop function initial definition



int carSpeed = 0;           // define a variable for speed of the car

void setup()               // All the initail configuration should be placed here in setup 
{
  carServo.attach(servoPin);  // setting the Servo motor control for the pin 
}

void loop()                // Loop function which will be run forever
{
  driveSquare();          // drive a square
  carStop();              // stop the car
  delay(10000);           // wait for 10 seconds
}





void driveSquare() 
{  
  // The code to drive the car in a square 
}

void carStop() 
{
  // The code to stop the car
}





