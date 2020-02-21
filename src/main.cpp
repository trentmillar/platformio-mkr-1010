/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include <SPI.h>
#include <WiFi101.h>
#include "Arduino.h"
#include "arduino_secrets.h" 


#ifndef LED_BUILTIN
#define LED_BUILTIN 6
#endif

// Initialize the Wifi client library
WiFiClient client;

void setup()
{
    // initialize serial
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB port only
    }
    Serial.println("Initializing...");

    // initialize pins
    pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);

    // wait for a second
    delay(5000);

    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);

    // wait for a second
    delay(1000);
}