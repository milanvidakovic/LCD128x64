#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

U8G2_ST7565_64128N_1_4W_SW_SPI u8g2(U8G2_R0, 18, 23, 5, 21, 19);

void setup(void) {
  Serial.begin(115200);
  Serial.println("U8G2");
  u8g2.begin();
  Serial.println(u8g2.getDisplayWidth());
}

void loop(void) {
  u8g2.firstPage();
  do {
    u8g2.setContrast(191);
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0,24,"Hello World!");
  } while ( u8g2.nextPage() );
}

