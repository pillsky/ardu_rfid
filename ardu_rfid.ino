//Testprogramm zum Auslesen der RFID-Antenne
//Anzeige auf seriellen Monitor
//30.11.2018

#include <SoftwareSerial.h>
SoftwareSerial RFID(13,12); // RX and TX

int i;

void setup()
{
  RFID.begin(9600);    // start serial to RFID reader
  Serial.begin(9600);  // start serial to PC 
}

void loop()
{
  if (RFID.available() > 0) 
  {
     i = RFID.read();
     Serial.print(i, DEC);
     Serial.print(" ");
  }
}
