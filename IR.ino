#include <LiquidCrystal.h> 
LiquidCrystal lcd(0,1,2, 3, 4, 5);

const int LED=13;
const int SW=9;

int val=0;
int once=0;

void setup()
{
  lcd.begin(16, 2);
    
  lcd.setCursor(0,0); 
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  delay(1000);
      
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);
}

void loop()
{
  val=digitalRead(SW);
  delay(120);
  
  if(val==HIGH)
  {
    digitalWrite(LED,HIGH);
    lcd.setCursor(0,1); 
    lcd.print("OBJECT DEDUCTED");
  }
  else 
  {
    digitalWrite(LED,LOW);
    lcd.setCursor(0,1); 
    lcd.print("OBJECT SERCHING");
  }
}
