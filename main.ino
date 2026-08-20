#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 oled(128, 64, &Wire, -1);

int pos = 64;
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.setTextSize(2);
  oled.setCursor(35, 20);
  oled.print("GO!");
  oled.display();

  tone(13, 1000, 300);
  delay(500);
}

void loop() {
  if (digitalRead(2) == LOW) {
    pos = pos - 5;
    tone(13, 600, 50);
    delay(100);
  }

  if (digitalRead(3) == LOW) {
    pos = pos + 5;
    tone(13, 800, 50);
    delay(100);
  }

  oled.clearDisplay();

  oled.setTextSize(1);
  oled.setCursor(5, 5);
  oled.print("P1");

  oled.setCursor(108, 5);
  oled.print("P2");

  oled.drawLine(10, 35, 118, 35, WHITE);
  oled.drawLine(64, 28, 64, 42, WHITE);
  oled.fillCircle(pos, 35, 5, WHITE);

  oled.display();
//p1 win
  if (pos <= 10) {
    oled.clearDisplay();
    oled.setTextSize(2);
    oled.setCursor(15, 25);
    oled.print("P1 WINS!");
    oled.display();

    tone(13, 1200, 500);
    delay(2000);

    pos = 64;
  }//p2 win
  if (pos >= 118) {
    oled.clearDisplay();
    oled.setTextSize(2);
    oled.setCursor(15, 25);
    oled.print("P2 WINS!");
    oled.display();

    tone(13, 1500, 500);
    delay(2000);

    pos = 64;
  }
