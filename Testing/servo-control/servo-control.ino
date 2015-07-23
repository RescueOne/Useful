////////////////////////////////////////////////
// TINAH Template Program - UBC Engineering Physics 253
// (nakane, 2015 Jan 2)  - Updated for use in Arduino IDE (1.0.6)
/////////////////////////////////////////////////


#include <phys253.h>          
#include <LiquidCrystal.h>    


void setup()
{  
  #include <phys253setup.txt>
  Serial.begin(9600) ;
  
}


// NOTE: digital has HIGH or LOW

void loop()
{
  
  // Set the screen to be ready to print
  LCD.clear();  LCD.home();
  LCD.setCursor(0,0); LCD.print("Servo Angle: ");
  LCD.setCursor(0,1);
  
  // Set input pin
  int knob_pin = 7;
  
  // DC MOTOR
//  int knob = (analogRead(knob_pin) - 511.5)/2.0;
//  motor.speed(3,knob);
//  motor.speed(2,-knob);
  
  // RC SERVO
  int angle = ( analogRead(knob_pin) / 1023.0) * 180;
  RCServo1.write(angle) ;
  
  // This might be might be for PWM ???
  // motor.speed(0,700);
  // motor 0 at 70% duty cycle
  
  // int motor_speed = ( (double) knob / 255.0) * 1000; first attempt
  // int motor_speed = (knob);
  
  LCD.print(angle);
  delay(100);
}

