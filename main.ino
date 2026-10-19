#include <Servo.h>
#include <LiquidCrystal.h>
 
const int led_rouge = 2;
const int led_verte = 3;
const int led_blanche = 6;
const int detecteur_mvm = 5;
const int detecteur_gas = 5;
const int buzzer = 7;
 
int h=18, m=59, s=0;
Servo servo;
LiquidCrystal lcd(13,12,11,10,9,8);
 
void setup()
{
  pinMode(led_rouge, OUTPUT);
  pinMode(led_verte, OUTPUT);
  pinMode(led_blanche, OUTPUT);
  pinMode(detecteur_mvm, INPUT);
  pinMode(detecteur_gas, INPUT);
  pinMode(buzzer, OUTPUT);
  servo.attach(4);
  servo.write(0);
  lcd.begin(16,2);
}
 
void loop()
{
  /* time */
  s++;
  if(h<10){lcd.print("0");}
  lcd.print(h);
  lcd.print(":");
  if(m<10){lcd.print("0");}
  lcd.print(m);
  lcd.print(":");
  if(s<10){lcd.print("0");}
  lcd.print(s);
  
  if(h<12)
     lcd.print(" AM");
  else
     lcd.print(" PM");
    
  delay(1000);
  lcd.clear();
  if(s>=59){
    s=0;
    m=m+1;
  }
  if(m>=59)
  {
    m=0;
    h=h+1;
  }
  if(h==24)
     h=0;
  /* time ----------- */
  
  if( (h>19)||(h>=0)&&(h<8) )
  {
    servo.write(0);
    digitalWrite(led_verte,LOW);
  	digitalWrite(led_rouge,HIGH);
  }
  else
  {      
  	digitalWrite(led_rouge,LOW);
    servo.write(90);
    digitalWrite(led_verte,HIGH);
  }
  if(digitalRead(detecteur_mvm)==HIGH)
  {
   digitalWrite(led_blanche,HIGH);
  }
  else 
   digitalWrite(led_blanche,LOW);
  
  if(analogRead(detecteur_gas) > 100)
    tone(buzzer, 1000);
  else
    noTone(buzzer);
}
