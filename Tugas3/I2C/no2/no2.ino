#include <virtuabotixRTC.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 20,4);

virtuabotixRTC myRTC(7,6,5);
const int pinSuhu = A0;
float suhu,data;

void setup()
{
  lcd.begin(20,4);
  lcd.backlight();
  pinMode(pinSuhu, INPUT);
}

void loop(){
  data = analogRead(pinSuhu);
  suhu = ((data/1024)*500);
  lcd.setCursor(0,0);
  lcd.print("Suhu : ");
  lcd.print(suhu);
  lcd.print(" C");
  myRTC.updateTime();
  lcd.setCursor(0,2);
  lcd.print("hh:mm:ss : ");
  lcd.print(myRTC.hours);
  lcd.print(":");
  lcd.print(myRTC.minutes);
  lcd.print(":");
  lcd.print(myRTC.seconds);
  lcd.print(" ");
}
