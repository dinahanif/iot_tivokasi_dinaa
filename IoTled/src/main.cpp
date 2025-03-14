#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32


// Deklarasi pin LED
int lampu1 = 32;
int lampu2 = 25;
int lampu3 = 14;


void setup() {
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}


void loop() {
    digitalWrite(lampu1, HIGH); 
   delay(2000);
   digitalWrite(lampu1, LOW);
   
   digitalWrite(lampu2, HIGH);
   delay(400);
   digitalWrite(lampu2, LOW);
   
   digitalWrite(lampu3, HIGH);
   delay(1000);
   digitalWrite(lampu3, LOW);
   }