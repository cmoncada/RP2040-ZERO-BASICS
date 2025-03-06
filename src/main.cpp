#include <Arduino.h>
#include <NeoPixelConnect.h>

// NeoPixelConnect led(16, 5, pio0, 0);
NeoPixelConnect led(16, 1, pio0, 0);

void setup()
{
}

void loop()
{
  // RP2040 ZERO

  led.neoPixelFill(255, 255, 255,  true);
  delay(2000);
  led.neoPixelClear(true);
  delay(100);

  led.neoPixelFill(255, 0, 0,  true);
  delay(100);
  led.neoPixelClear(true);
  delay(100);

  led.neoPixelFill(0, 255, 0, true);
  delay(100);
  led.neoPixelClear(true);
  delay(100);

  led.neoPixelFill(0, 0, 255, true);
  delay(100);
  led.neoPixelClear(true);
  delay(100);

  led.neoPixelFill(0, 255, 255, true);
  delay(100);
  led.neoPixelClear(true);
  delay(100);

  //RP2040 MATRIX

  // led.neoPixelSetValue(2, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(7, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(12, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(17, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(22, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(18, 255, 0, 0, true);
  // delay(10);
  // led.neoPixelSetValue(16, 255, 0, 0, true);
  // delay(5000);
  // led.neoPixelClear(true);
  // delay(100);

  // led.neoPixelSetValue(2, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(7, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(12, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(17, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(22, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(8, 10, 100, 200, true);
  // delay(10);
  // led.neoPixelSetValue(6, 10, 100, 200, true);
  // delay(5000);
  // led.neoPixelClear(true);
  // delay(100);
}