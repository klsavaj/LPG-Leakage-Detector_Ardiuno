#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

int buzzer = 13;
int GASA0 = A0;
int gasvalue;

void setup() {
  

 mySerial.begin(9600);
 Serial.begin(9600);
 pinMode(buzzer, OUTPUT); 

 delay(5000);     
}

void loop() {
  int analogSensor = analogRead(GASA0);
  int gasvalue=(analogSensor-50)/10;
  

  if (gasvalue >= 50)
  {
    SendTextMessageSafeZone();
    tone(buzzer, 1000, 200);
  }
  else if (gasvalue >= 200)
  {
    SendTextMessageDangerZone();
    tone(buzzer, 1000, 500);
  }
  else
  {
    noTone(buzzer);
  }
  delay(500);

}

void SendTextMessageSafeZone()
{
  mySerial.println("AT+CMGF=1");    //To send SMS in Text Mode
  delay(1000);
  mySerial.println("AT+CMGS=\"+918160006933\"\r");  // change to the phone number you using
  delay(1000);
  mySerial.println("Gas Leaking has started!!!! Address:Unit-2 SP Hostel,Gulbai Tekra, Navrangpura , 380006.");//the content of the message
  delay(200);
  mySerial.println((char)26);//the stopping character
  delay(1000);
  
}

void SendTextMessageDangerZone()
{
  mySerial.println("AT+CMGF=1");    //To send SMS in Text Mode
  delay(1000);
  mySerial.println("AT+CMGS=\"+918160006933\"\r");  // change to the phone number you using
  delay(1000);
  mySerial.println("DANGER DANGER DANGER !!! Gas Leaking!!!! Address:Unit-2 SP Hostel,Gulbai Tekra, Navrangpura , 380006.");//the content of the message
  delay(200);
  mySerial.println((char)26);//the stopping character
  delay(1000);
  
}
