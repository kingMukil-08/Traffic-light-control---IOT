#include <Servo.h> //import library


Servo myservo; 

int led = 13;

Servo myservo1;   

int led1 = 12;

void setup() 

{ 

  pinMode(led, OUTPUT); 

   myservo.attach(9, 500, 2500);   

  pinMode(led1, OUTPUT);

  myservo1.attach(10, 500, 2500);

} 

void loop() 

{ 
    // Rotate Servo 3 by 180 degree
  myservo.write(90);

  myservo1.write(0);

  delay(10); 
 digitalWrite(led, HIGH);   

  delay(8000);              

  digitalWrite(led, LOW);  

  

  myservo.write(0);

  myservo1.write(0);

  delay(1000); 
  myservo.write(0);

  myservo1.write(90);

  delay(10); 
   digitalWrite(led1, HIGH);   

  delay(8000);               

  digitalWrite(led1, LOW);    
  myservo.write(0);
  

  myservo1.write(0);

  delay(1000); 
    

}
