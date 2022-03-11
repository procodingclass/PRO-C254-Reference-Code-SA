
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);

  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1);
  }

  delay(1000); 
  oled.setCursor(2, 0);
}

void loop() {
  // draw a circle
  oled.clearDisplay();
  oled.drawCircle(50, 30, 30, WHITE);
  oled.display();
  delay(1000);

  // fill a circle
  oled.clearDisplay();
  oled.fillCircle(50, 30, 30, WHITE);
  oled.display();
  delay(1000);

  // draw a triangle
  oled.clearDisplay();
  oled.drawTriangle(50, 10, 0, 60, 60, 60, WHITE);
  oled.display();
  delay(1000);

  // fill a triangle
  oled.clearDisplay();
  oled.fillTriangle(50, 10, 0, 60, 60, 60, WHITE);
  oled.display();
  delay(1000);


  oled.clearDisplay();
  oled.drawRect(40, 20, 60, 40, WHITE);
  oled.display();
  delay(1000);

  // fill a rectangle
  oled.clearDisplay();
  oled.fillRect(40, 20, 60, 40, WHITE);
  oled.display();
  delay(1000);


}
