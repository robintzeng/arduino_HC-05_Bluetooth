#include <SoftwareSerial.h>
#define BLUETOOTH Serial2

void setup()
{
  Serial.begin(115200);
  BLUETOOTH.begin(115200);  
}

void loop()
{
    if(Serial.available() > 0)
 {
  int temp = 50;
      switch(char(Serial.read()))
      {
      case 'q':  delay(1000);BLUETOOTH.write("^^ FUCKING PERFECT");Serial.print(1); break;
      case 'w':  delay(1000);BLUETOOTH.write("PERFECT");Serial.print(2); break;
      case 'r':  delay(1000);BLUETOOTH.write(7);Serial.print(3); break;
      default: break;
      }
}

}
//CRC
