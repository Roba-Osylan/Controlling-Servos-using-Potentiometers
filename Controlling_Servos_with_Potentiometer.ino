#include <Servo.h>
//Define the pins of each servo
#define pinServo1 3
#define pinServo2 5
#define pinServo3 6
#define pinServo4 9
#define pinServo5 10

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

//define the pins of the potentiometer 
int Pot1= A0;
int Pot2= A1;
int Pot3= A2;
int Pot4= A3;
int Pot5= A4;

//define variables to store the valuse of thepotentiometers
int val1;
int val2;
int val3;
int val4; 
int val5;
  
void setup() {
  
  Servo1.attach(pinServo1);
  Servo2.attach(pinServo2);
  Servo3.attach(pinServo3);
  Servo4.attach(pinServo4);
  Servo5.attach(pinServo5);

}

void loop() {
  val1 = analogRead(Pot1);            //reads the value of potentiometer 1 (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 90);   //map it along (value between 0 and 90)
  Servo1.write(val1);                 //rotate the servo position to that value
                         

  val2 = analogRead(Pot2);            
  val2 = map(val2, 0, 1023, 0, 90);    
  Servo2.write(val2);                  
  
  val3 = analogRead(Pot3);            
  val3 = map(val3, 0, 1023, 0, 90);     
  Servo3.write(val3);                  
  
  val4 = analogRead(Pot4);            
  val4 = map(val4, 0, 1023, 0, 90);     
  Servo4.write(val4);                  
       

  val5 = analogRead(Pot5);            
  val5 = map(val5, 0, 1023, 0, 90);     
  Servo5.write(val5);                 
}
