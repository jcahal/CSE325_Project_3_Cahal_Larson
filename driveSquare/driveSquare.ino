
#include <Servo.h>

Servo carServo; // Create a Servo Object

#define pwmToMotor 2        // Defining the PWM pin to run the motor
#define servoPin 48         // Defining the servo control pin

void      driveSquare();    // Drive square function initial definition to drive a square
void      carStop();        // Stop function initial definition



int carSpeed = 20;           // define a variable for speed of the car

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
  carServo.write(93); // Sets wheels straight
  delay(5000);
  
  // Drives car forward at 10% duty for 4 seconds
  analogWrite(pwmToMotor, carSpeed);  
  delay(4000);

  // Turns and drives to the right for 1.415 seconds
  carServo.write(150);
  delay(1415);

  // Returns wheels straight and drives for 4 seconds
  carServo.write(93); 
  delay(4000);

  // Turns and drives to the right for 1.415 seconds
  carServo.write(150); 
  delay(1415);

  // Returns wheels straight and drives for 4 seconds
  carServo.write(93); 
  delay(4000);

  // Turns and drives to the right for 1.415 seconds
  carServo.write(150); 
  delay(1415);

  // Returns wheels straight and drives for 4 seconds
  carServo.write(93); 
  delay(4000);

  // Turns and drives to the right for 1.250 seconds to return to original position
  carServo.write(150); 
  delay(1250);
  
}

void carStop() 
{
    analogWrite(pwmToMotor, 0); // Stops car
}
