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




void loop()
{
  
    int QRD_PIN0 = 0;
    int QRD_PIN1 = 1;
    
    LCD.clear(); LCD.home();
    LCD.print("0 = "); LCD.print(analogRead(QRD_PIN0));
    LCD.setCursor(0,1);
    LCD.print("0 = "); LCD.print(analogRead(QRD_PIN0));
    delay(200);
}

