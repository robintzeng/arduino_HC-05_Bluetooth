#include <SoftwareSerial.h>
#define BLUETOOTH  Serial2
void setup()
{
 Serial.begin(115200);
 BLUETOOTH.begin(115200);
}
void loop()
{
  // 檢查是否有資料傳來
  if (BLUETOOTH.available()) {
   delay(100);  //稍候一下，讓資料都到
 
    if (BLUETOOTH.available() > 0) 
    {
        Serial.println((char)BLUETOOTH.read());
    }
  }
}
