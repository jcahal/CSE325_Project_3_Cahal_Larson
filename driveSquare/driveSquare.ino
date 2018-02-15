
#include <Servo.h>

Servo carServo; // Create a Servo Object

#define pwmToMotor 2        // Defining the PWM pin to run the motor
#define servoPin 48         // Defining the servo control pin
#define dirPin 3
#define motorDir 0

void turn(Servo servo) {

  // turn the wheel
  servo.write(180);
  delay(250);

  // drive a bit
  analogWrite(pwmToMotor, 20);
  delay(500);
  analogWrite(pwmToMotor, 0);
  delay(500);
  
  // straighten the wheel
  servo.write(90);
  delay(250);
}

void drive(int speed) {
  analogWrite(pwmToMotor, speed);
  delay(1000);
  analogWrite(pwmToMotor, 0);
  delay(1000);
}

void driveSquare(int speed, Servo servo) {    // Drive square function initial definition to drive a square
  // loop through this 4 times
  for(int i = 0; i <= 4; i++){
    drive(speed);
    turn(servo);
  }

}
void carStop() {       // Stop function initial definition
  
}



int carSpeed = 40;           // define a variable for speed of the car

void setup()               // All the initail configuration should be placed here in setup 
{
  carServo.attach(servoPin);  // setting the Servo motor control for the pin 
  pinMode(dirPin, OUTPUT);
  digitalWrite(dirPin, motorDir); // define forward motion always
}

void loop()                // Loop function which will be run forever
{
  driveSquare(carSpeed, carServo);          // drive a square
  carStop();              // stop the car
  delay(10000);           // wait for 10 seconds
}




/*
void driveSquare() 
{  
  // The code to drive the car in a square 
}

void carStop() 
{
  // The code to stop the car
}
*/





