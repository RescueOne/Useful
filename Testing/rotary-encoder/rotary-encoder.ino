#include <phys253.h>          
#include <LiquidCrystal.h>

void setup()
{  
  #include <phys253setup.txt>
  Serial.begin(9600) ;
  
}

void loop() {
	// LCD.clear(); LCD.home();
	// LCD.print("Stop = Test");
	// LCD.setCursor(0, 1);
	// // LCD.print("Stop = Exit");
	// delay(100);
 
    control();
}

void control() {

	int THRESHOLD = 300;
	int QRD_ENCODE_PIN = 0;
	int qrdEncoder = digitalRead(0);
	int printCount = 0;

	int turns = 0;

	while(true)
	{
		qrdEncoder = digitalRead(0);
		if (qrdEncoder == LOW) {
			while(digitalRead(0) == LOW){ }
			turns++;
		}

		if (printCount > 300) {
			LCD.clear(); LCD.home();
			LCD.print("turns = "); LCD.print(turns);
			printCount = 0;
		}
		printCount++;

		// if (stopbutton())
  //       {
  //           delay(100);
  //           if(stopbutton()) { return; }    
  //       }

	}
}