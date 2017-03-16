int statoled = 0;  
void setup() { 
  // Ti fa da interruttore on off col pulsante semza usare interruttore.
pinMode(13,OUTPUT);
pinMode(12,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(12)==LOW){
  statoled =!statoled;  
  digitalWrite(13,statoled);  
  delay(250);
 }
}
