 //https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library  
 #include <Wire.h> //This library allows you to communicate with I2C devices  
 //SDA -> GP4 and SCL -> GP5    
 #include <LiquidCrystal_I2C.h> //  This library is for character LCDs based on the HD44780 controller connected via I2C bus using the cheap I2C backpack modules based on the PCF8574 
 //LiquidCrystal_I2C lcd(0x3F,16,2);  
 LiquidCrystal_I2C lcd(0x27,16,2); 
 // if lcd is not print then use this 0x27..  
 //initialize the liquid crystal library
//the first parameter is the I2C address
//the second parameter is how many rows are on your display
//the third parameter is how many columns are on your display

 void setup()  
  {  
   lcd.begin();    //initialize lcd screen   
   lcd.backlight();  // turn on the backlight
   lcd.setCursor(0,0);  
   lcd.print("RP2040-Zero with");  
   lcd.setCursor(0,1);  
   lcd.print(" LCD1602 on i2c!");  
   delay(3000);
  }  
 void loop()   
  {  
  lcd.clear();
   lcd.setCursor(0,0);  
   lcd.print(" test by niq_ro ");  
   lcd.setCursor(0,1);  
   lcd.print("as Arduino board");
   delay(3000);
  lcd.setCursor(0,0);  
   lcd.print("RP2040-Zero with");  
   lcd.setCursor(0,1);  
   lcd.print(" LCD1602 on i2c!");  
   delay(3000);
  }  
