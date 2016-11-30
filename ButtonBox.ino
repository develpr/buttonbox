#include <WiFiManager.h>

/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  
  Serial.begin(115200);
  pinMode(16, OUTPUT);
  pinMode(14, OUTPUT);

  Serial.print("ENTRY READING: ");
  Serial.print("ENTRY READING: ");
  Serial.print("ENTRY READING: ");
  Serial.print("ENTRY READING: ");
  Serial.print("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println("ENTRY READING: ");
  Serial.println(readAdc());
  digitalWrite(14, HIGH);
}

// the loop function runs over and over again forever
void loop() {                    
                        
  for(int i = 0; i < 10; i++){
    blinkLight();            
  }
  delay(1000);
  digitalWrite(14, LOW);
  delay(2000);
  digitalWrite(14, LOW);
  digitalWrite(16, LOW);\
  delay(1000);
}

void blinkLight() {

  delay(400);           
  digitalWrite(16, HIGH);
//  Serial.printf("reading: %d \n", analogRead(A0));
  Serial.println(analogRead(A0));
  delay(800); 
  digitalWrite(16, LOW);\
}

int readAdc(){


  double result = 0;

  int readings = 50;

  for(int i = 0; i < readings; i++){
    result = result + analogRead(A0);
  }
  
  return (int)(result / readings);

}

