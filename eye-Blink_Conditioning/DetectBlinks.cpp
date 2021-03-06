//
// DetectBlinks.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		eye-Blink_Conditioning
//
// Created by 	Kambadur Ananthamurthy, 04/08/15 1:45 pm
// 				Kambadur Ananthamurthy
//
// Copyright	© Kambadur Ananthamurthy, 2015
// Licence   	<#license#>
//
// See 			DetectBlinks.h and ReadMe.txt for references
//


// Core library for code-sense - IDE-based
#if defined(WIRING) // Wiring specific
#   include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific
#   include "WProgram.h"
#elif defined(MPIDE) // chipKIT specific
#   include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#   include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad specific
#   include "Energia.h"
#elif defined(LITTLEROBOTFRIENDS) // LittleRobotFriends specific
#   include "LRF.h"
#elif defined(MICRODUINO) // Microduino specific
#   include "Arduino.h"
#elif defined(TEENSYDUINO) // Teensy specific
#   include "Arduino.h"
#elif defined(REDBEARLAB) // RedBearLab specific
#   include "Arduino.h"
#elif defined(SPARK) // Spark specific
#   include "application.h"
#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
#   include "Arduino.h"
#else // error
#   error Platform not defined
#endif // end IDE

// Code
#include "Globals.h"
#include "DetectBlinks.h"

void detectBlinks() //(unsigned long currentTime)
{
    
    if ( currentPhaseTime - lastTime > sampleInterval ) {

        //int temp = analogRead(blink_ai);
        blink = analogRead(blink_ai);
        Serial.print(blink);
        //Serial.print(millis());
        //Serial.print(" ");
        Serial.print(" ");
        //    blinkCount++;
        Serial.println( currentPhaseTime % 10000 );
        lastTime += sampleInterval;
    }
}
