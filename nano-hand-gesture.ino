/* This program is written by Dinkar Patnaik for demonstrating gesture based activities using Arduino Nano which contrins eight analog pins that we need. */
/* Do Like + Share + Subscribe to my youtube channel  https://www.youtube.com/channel/UCIhStOd-JHFUoryzg9iHzCw */
#include<SoftwareSerial.h>
SoftwareSerial bt(2, 3); /* (Rx,Tx) */
int thumb;  // A0
int index;  // A1
int middle; // A2
int ring;   // A3
int little; // A4
int x;      // A5
int y;      // A6
int z;      // A7
void setup()
{
  bt.begin(9600);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{

  if (bt.available())  /* If data is available on serial port */
  {
    Serial.write(bt.read()); /* Print character received on to the serial monitor */
  }

  thumb = analogRead(A0);
  Serial.print("thumb: ");
  Serial.println(thumb);

  index = analogRead(A1);
  Serial.print("index: ");
  Serial.println(index);

  middle = analogRead(A2);
  Serial.print("middle: ");
  Serial.println(middle);

  ring = analogRead(A3);
  Serial.print("ring: ");
  Serial.println(ring);

  little = analogRead(A4);
  Serial.print("little: ");
  Serial.println(little);

  x = analogRead(A5);
  Serial.print("X: ");
  Serial.println(x);

  y = analogRead(A6);
  Serial.print("Y: ");
  Serial.println(y);

  z = analogRead(A7);
  Serial.print("Z: ");
  Serial.println(z);







  if (x > 890)
  {

  }
  if (y > 890)
  {

  }
  if (z > 890)
  {

  }


  delay(1000);
}
