#include <Servo.h>
#include <LiquidCrystal.h>


Servo gianni;
int pot=A3;
int val;
LiquidCrystal lcd(12,11,5,4,3,2);





void setup() {
  // put your setup code here, to run once:
gianni.attach(9);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(pot);
val=map(val, 0, 1023, 0, 179);
gianni.write(val);
lcd.print(val);
delay(15);
}
