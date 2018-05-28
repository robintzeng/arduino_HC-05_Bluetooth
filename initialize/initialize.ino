#define COMPUTER Serial
#define BLUETOOTH Serial2

void setup() 
{
    // communication with the host computer
    COMPUTER.begin(115200);  

    // communication with the BT module on BLUETOOTH
    BLUETOOTH.begin(38400);

}
 
 
void loop() 
{
    // listen for communication from the BT module and then write it to the COMPUTER monitor
    if ( BLUETOOTH.available() )   {  COMPUTER.write( BLUETOOTH.read() );  }
 
    // listen for user input and send it to the HC-05
   if ( COMPUTER.available() )   {  BLUETOOTH.write( COMPUTER.read() );  }
}
