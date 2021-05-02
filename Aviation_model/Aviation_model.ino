#include "SoftwareSerial.h"
#include<Servo.h>

/* 정면, 좌측, 우측 외부 조명 */
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;

/* 좌측, 우측 날개 */
int INA = 9;
int INB = 8;
int INA1 = 6;
int INB1 = 7;



int Tx = 11;
int Rx = 10;
SoftwareSerial BT(Tx, Rx);


Servo myservo;
Servo myservo1;
Servo myservo2;
Servo myservo3;



void setup()
{
  
  BT.begin(9600);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
  pinMode(INA1, OUTPUT);
  pinMode(INB1, OUTPUT);

  myservo.attach(12);
  myservo1.attach(13);
  myservo2.attach(16);
  myservo3.attach(15);
  myservo.write(180);
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
}



char master_input;

void loop()
{
  if (BT.available())
  {
    master_input = (BT.read());

    if (master_input == '1') 
    {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
    }
    if (master_input == '2') 
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
    if (master_input == '3') 
    {
      digitalWrite(ledPin3, HIGH);
    }
    if (master_input == '4') 
    {
      digitalWrite(ledPin3, LOW);
    }
    if (master_input == '5')
    {
      digitalWrite(ledPin4, HIGH);
    }
    if (master_input == '6') 
    {
      digitalWrite(ledPin4, LOW);
    }
    if (master_input == '7') 
    {
      digitalWrite(INA, HIGH);
      digitalWrite(INB, LOW);
    }
    if (master_input == '8') 
    {
      digitalWrite(INA, LOW);
      digitalWrite(INB, LOW);
    }
    if (master_input == '7') 
    {
      digitalWrite(INA1, HIGH);
      digitalWrite(INB1, LOW);
    }
    if (master_input == '8') 
    {
      digitalWrite(INA1, LOW);
      digitalWrite(INB1, LOW);
    }

    if (master_input == '9') 
    {
      digitalWrite(INA1, LOW);
      digitalWrite(INB1, LOW);
    }

    if (master_input == 'b') 
    {
      myservo.write(180);
      myservo1.write(0);
    }

    if (master_input == 'c') 
    {
      myservo.write(90);
      myservo1.write(90);
    }


    if (master_input == 'd') 
    {
      myservo.write(0);
      myservo1.write(180);
    }

    if (master_input == 'e') 
    {
      myservo2.write(0);
    }

    if (master_input == 'f') 
    {
      myservo2.write(90);
    }

    if (master_input == 'g') 
    {
      myservo2.write(180);

    }


    if (master_input == 'h') 
    {
      myservo3.write(135);
    }



    if (master_input == 'i') 
    {
      myservo3.write(90);
    }



    if (master_input == 'j') 
    {
      myservo3.write(45);
    }


  }
}
