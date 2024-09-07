// File arduino

// Initializing library
#include <SoftwareSerial.h> // Lib for module that return many data
#include <TinyGPS++.h> // Lib for module gps
#include <Wire.h> 
#include <VL53L1X.h> // Lib for sensor radar lazer
#include "MAX30100.h" // lib for module heartbeat
#include <MPU6050_tockn.h> // lib for module mpu6050

// Initializing object special


// Initializing variable
#define pinLed 2 // Led
#define pinBtn 3 // Button
#define defaultBaud 9600 // Baudate

// Function main
int main(void) {
  // Setup code that only run once time
  Serial.begin(defaultBaud);
  pinMode(pinLed, OUTPUT);

  // Repeating code forever
  while (true) {
    /* Looping */
  }
}

