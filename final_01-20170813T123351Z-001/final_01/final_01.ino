#include <VarSpeedServo.h>     //// include the library code
 char data ;  //initialization of variable "data"
 int i;       //initialization of variable "i"
 int j;      //initialization of variable "j"
 int k;      //initialization of variable "k"

 
VarSpeedServo myservo1;   // create servo object to control a servo 
VarSpeedServo myservo2;   // create servo object to control a servo 
VarSpeedServo myservo3;   // create servo object to control a servo 
VarSpeedServo myservo4;   // create servo object to control a servo 
VarSpeedServo myservo5;   // create servo object to control a servo 
VarSpeedServo myservo6;   // create servo object to control a servo 
  
 void setup() 
{
myservo1.attach(2);  // attaches the servo on pin 2 to the servo object 
myservo2.attach(3);  // attaches the servo on pin 3 to the servo object 
myservo3.attach(4);  // attaches the servo on pin 4 to the servo object 
myservo4.attach(5);  // attaches the servo on pin 5 to the servo object 
myservo5.attach(6);  // attaches the servo on pin 6 to the servo object 
myservo6.attach(7);  // attaches the servo on pin 7 to the servo object 

Serial.begin(38400);   //Sets the baud for serial data transmission  
} 

 void loop() {    
                                     //rest position
   myservo1.write(92, 5, true);      // move to 90 degrees, use a speed of 5, wait until move is complete  
   myservo2.write(90, 5, true);      // move to 90 degrees, use a speed of 5, wait until move is complete 
   myservo3.write(100, 5, true);     // move to 110 degrees, use a speed of 5, wait until move is complete 
   myservo4.write(90,5, true);       // move to 90 degrees, use a speed of 5, wait until move is complete 
   myservo5.write(90, 5, true);      // move to 90 degrees, use a speed of 5, wait until move is complete 
   myservo6.write(86, 5, true);      // move to 90 degrees, use a speed of 5, wait until move is complete 
   
   if(Serial.available() > 0)        // Send data only when you receive data:
   {
while(1) {

data = Serial.read();                //Read the incoming data & store into data
 Serial.print(data);
if(data=='a')                        //if data=a   then walking 

{for (int i=0 ; i <= 1; i++){        //for loop for repetation of walking
myservo1.write(112,8, true);
myservo4.write(55,30, true);    
myservo5.write(60,30, true);      
myservo6.write(80,50, true);     
myservo1.write(85, 8, true); 
myservo6.write(65,13, true);  
myservo4.write(90,30, true);       
myservo5.write(90,30, true);

myservo3.write(120,30, true);
myservo2.write(104,30, true); 
myservo1.write(97,50, true); 
myservo6.write(91, 8, true);
myservo1.write(112,13, true); 
myservo3.write(100,30, true);
myservo2.write(90,30, true);}
myservo1.write(92, 5, true);}

else if (data=='c')                    //if data=c then Turn Left

{
  for (int j = 0 ; j <= 9; j++){
myservo1.write(110,8, true);  
myservo4.write(50,30, true);    
myservo5.write(51,30, true);    
myservo6.write(86,100, true);     
myservo1.write(90, 8, true); 

myservo4.write(54,100, true);
myservo5.write(55,100, true);
myservo4.write(59,100, true);
myservo5.write(60,100, true);
myservo4.write(65,100, true);
myservo5.write(65,100, true);
myservo4.write(70,100, true);
myservo5.write(70,100, true);
myservo4.write(75,100, true);
myservo5.write(75,100, true);
myservo4.write(80,100, true);
myservo5.write(80,100, true);
myservo4.write(85,100, true);
myservo5.write(85,100, true);
myservo4.write(88,100, true);
myservo5.write(88,100, true);
}}

else if (data=='d')                    //if data=d then Turn right 

{ for (int k=0 ; k <= 7; k++){
myservo6.write(65,10, true); 
myservo3.write(127,30, true);
myservo2.write(112,30, true);
myservo1.write(92,50, true); 
myservo6.write(87, 13, true); 

myservo3.write(123,250, true);    
myservo2.write(108,250, true);    
myservo3.write(119,250, true);
myservo2.write(103,250, true);
myservo3.write(115,250, true);
myservo2.write(100,250, true);
myservo3.write(111,250, true);
myservo2.write(96,250, true);
myservo3.write(106,250, true);
myservo2.write(92,250, true);
myservo3.write(101,250, true);
myservo2.write(90,250, true);
myservo3.write(96,250, true);
myservo3.write(90,250, true);
}
}

else if(data=='f')             //if data =f then rest standing position
{
myservo1.write(92, 5, true);        
myservo2.write(90, 5, true); 
myservo3.write(100, 5, true); 
myservo4.write(90,5, true);
myservo5.write(90, 5, true);
myservo6.write(86, 5, true);
}

else if (data=='e')              //if data=e football kick
{
myservo1.write(117,8, true);
myservo5.write(54,150, true);  
myservo5.write(0,150, true);
myservo5.write(110,200, true);  
myservo5.write(85, 10, true);
myservo4.write(90,50, true);

myservo1.write(92, 5, true);        
myservo2.write(90, 5, true); 
myservo3.write(100, 5, true); 
myservo4.write(90,5, true);
myservo5.write(90, 5, true);
myservo6.write(86, 5, true);
}

else if (data=='b')              //if data=b then manuvor02
{
myservo6.write(60,10, true);
myservo5.write(175, 25, true);
myservo2.write(180, 25, true);
myservo2.write(90, 25, true);
myservo5.write(90, 25, true);
myservo6.write(85,10, true);
  
myservo1.write(118,10, true);
myservo2.write(15, 25, true);
myservo5.write(5, 25, true);
myservo5.write(90, 25, true);
myservo2.write(90, 25, true);
myservo1.write(92,10, true);
}

}}}




