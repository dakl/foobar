/*
 * This is a minimal example, see extra-examples.cpp for a version
 * with more explantory documentation, example routines, how to
 * hook up your pixels and all of the pixel types that are supported.
 *
 */

#include "application.h"
#include "neopixel/neopixel.h" // use for Build IDE
// #include "neopixel.h" // use for local build

SYSTEM_MODE(AUTOMATIC);

// IMPORTANT: Set pixel COUNT, PIN and TYPE
#define PIXEL_PIN D2
#define PIXEL_COUNT 8
#define PIXEL_TYPE WS2812B

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

// Prototypes for local build, ok to leave in for Build IDE
void rainbow(uint8_t wait);
uint32_t Wheel(byte WheelPos);

void setup()
{
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  Particle.function("status", setStatus);

}
void loop()
{
  //rainbow(20);
}



int setStatus(String args){
    int value = args.toInt();
    Spark.publish("value", value);

    int brightness = 10;
    int color = strip.Color(0, 0, 0);

    if( value == 1 ) { // started
        color = strip.Color(brightness, brightness, 0);
    }else if (value == 2) { // failed
        color = strip.Color(brightness, 0, 0);
    }else if (value == 0) { // success
        color = strip.Color(0, brightness, 0);
    }

    strip.setPixelColor(0, color);
    strip.show();

    return value;
}
