#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(3, 0);
  lcd.print("Feliz dia");
  lcd.setCursor(4, 1);
  lcd.print("dos PAIS!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
