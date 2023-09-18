#include <Wire.h>

#include <LiquidCrystal_I2C.h>

#include <Keypad.h>
const byte ROWS=4;
const byte COLS=3;

char hexaKeys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS]={9,8,7,6};
byte colPins[COLS]={5,4,3};

Keypad customKeypad=Keypad(makeKeymap(hexaKeys),rowPins,colPins,ROWS,COLS);
LiquidCrystal_I2C lcd(0x21, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.backlight();
  lcd.init();

}


void loop() {
  // put your main code here, to run repeatedly:
  char customKey=customKeypad.getKey();
  if(customKey){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ckeilie");
  }
  }

