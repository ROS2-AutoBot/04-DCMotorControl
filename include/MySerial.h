#ifndef MY_SERIAL_H // Include guard to prevent multiple inclusions of this header file
#define MY_SERIAL_H

#include <Arduino.h>

void SerialBegin();    // Function to initialize the serial communication
void SerialDataPrint(); // Function to print the data to the Serial Monitor
void SerialDataWrite(); // Function to print the data to the Serial Monitor

#endif