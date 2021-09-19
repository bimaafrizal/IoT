#include <Wire.h> //library I2C
#include <LiquidCrystal_I2C.h> //library LCD
LiquidCrystal_I2C lcd(0x20 ,20,4); //I2C address for PCF8574
 
void setup()
{
 lcd.begin(20, 4); //perintah mulai
 lcd.backlight();
 lcd.setCursor(1,0);
 lcd.print("Bima Afrizal Malna");
 lcd.setCursor(1,1);
 lcd.print("V3420018");
 lcd.setCursor(1,2);
 lcd.print("Tugas Nomor 1");
 lcd.setCursor(1,3);
 lcd.print("....................");   
}
void loop()
{
  {delay(1000);
  lcd.clear();
  delay(1000);
  lcd.setCursor(1,0);
  lcd.print("Line 1");
  delay(500);
  lcd.setCursor(1,1);
  lcd.print("Line 2");
  delay(500);
  lcd.setCursor(1,2);
  lcd.print("Line 3");
  delay(500);
  lcd.setCursor(1,3);
  lcd.print("Line 4");
  delay(1000);
  lcd.setCursor(1,0);
  lcd.print("Line 1 TEST OK  ");
  lcd.setCursor(1,1);
  lcd.print("Line 2 TEST OK  ");
  lcd.setCursor(1,2);
  lcd.print("Line 3 TEST OK  ");
  lcd.setCursor(1,3);
  lcd.print("Line 4 TEST OK  ");
  delay(2000);
}
}
