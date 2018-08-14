#include <Servo.h>
Servo myServo1; //Servo 1 GRIPPER
Servo myServo2; //Servo 2   BASE
Servo myServo3; //Servo 3   ESCALERA
Servo myServo4; //Servo 4   HOMBRO
 
void setup() 
{
myServo1.attach(7); //pin 9 servo 1
myServo2.attach(8); //pin 10 servo 1
myServo3.attach(9); //pin 11 servo 1
myServo4.attach(10); //pin 12 servo 1
myServo1.write(10);   //griper
myServo2.write(70);   //base
myServo3.write(70); //escalera
myServo4.write(180); //hombro
delay(1000);
}

void loop() 
{
 ////BASE
     for (int x=10; x <=150; x++) 
     {
      myServo2.write(x);   //base

     delay(10);
     }
///gripper     
       for (int x=70; x <=120; x++) 
     {
     myServo1.write(x);   //griper
    delay(10);
     }
       ///hombro sube
          for (int x=180; x >=100; x--) 
     {
    myServo4.write(x);   //hombro
    delay(15);
     } 
  //// ///ESCALERA baja
   for (int x=50; x <=120; x++) 
     {
     myServo3.write(x);   //escalera
    delay(15);
     }
   
 ///PINZA cierra      
      for (int x=100; x >=10; x--) 
     {
      myServo1.write(x);   //griper
    delay(10);
     }

 //Hombvro baja  
        
        for (int x=100; x <=180; x++) 
     {
      myServo4.write(x);   //hombro
    delay(10);
     }    
////escalera sube
    for (int x=120; x >=50; x--) 
     {
      myServo3.write(x);   //escalera
    delay(10);
     }

 /////////////////////////////////////////RETORNOOOO/////////////7    
   ///BASE  
       for (int x=160; x >=10; x--) 
     {
      myServo2.write(x);   //base
    delay(10);
     }
 ///PINZA      
       for (int x=10; x <=120; x++) 
     {
     myServo1.write(x);   //griper;
    delay(5);
     }  
  ///PINZA cierra      
      for (int x=100; x >=10; x--) 
     {
      myServo1.write(x);   //griper
    delay(5);
     }   
}
