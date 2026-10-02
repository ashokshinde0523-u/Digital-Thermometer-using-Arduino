// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// ID = 1930330 .SO , Rs = 3; E= 10(instead of 0);d4 = 7, d5 = 6, d6 = 5, d7 = 4; 
LiquidCrystal lcd(3, 10,7,6,5, 4);
int degree;
double realDegree;
String lcdBuffer;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  degree = 0;
  realDegree = 0;
  lcd.print("Today's temp:");
  // Print a message to the LCD.
  
}

void loop(){
  lcd.print("                ");
  degree = analogRead(3); // 3rd digit = 3;
  realDegree = (double)degree/1024;
  realDegree *= 5;
  realDegree -= 0.5;
  realDegree *= 100;
  lcd.setCursor(0,1);
  realDegree = (9.0/5)*(realDegree) + 32;
  String output = String(realDegree) + String((char)178) + "F";
  lcd.print(output);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
}