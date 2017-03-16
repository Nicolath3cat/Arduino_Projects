void setup() {
  //  fa lampeggiare il led per un po quando premi il pulsante
pinMode(13,OUTPUT);
pinMode(12,INPUT_PULLUP); 
digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
int statopuls = digitalRead(12);
if (statopuls==LOW)
{ 
  for(int i=0; i<5; i++)
  {
    digitalWrite(13,HIGH);
    delay(200);
  
    digitalWrite(13,LOW);
    delay(200);
  }
 }
digitalWrite(13,LOW);
}


