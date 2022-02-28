#include <Servo.h>  //red = vcc ,brown = ground,yellow = data
Servo servo;

#define flam 7
int fValue;
int angle=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(flam, INPUT);
servo.attach(8);
  servo.write(angle);
}

void loop() {
  // put your main code here, to run repeatedly:
        for(angle = 0; angle <= 90; angle++)  
  {                                  
    servo.write(angle);               
    delay(50);                   
  } 
  for(angle = 90; angle >= 0; angle--)    
  {                                
    servo.write(angle);           
    delay(50);       
  } 
            fValue = digitalRead(flam);
           Serial.println(fValue);
           if(fValue == 0){
             Serial.println("fire");
           }
}
