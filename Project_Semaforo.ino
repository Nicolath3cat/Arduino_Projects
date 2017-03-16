int LED1=10;
int LED2=7;
int LED3=3;
int PULSANTE=11;
int val=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(PULSANTE, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:                                                                                                                                                                                                                                                                                       
digitalWrite(LED1, HIGH);
delay(2000);
digitalWrite(LED1, LOW);
delay(200);
digitalWrite(LED2, HIGH);
delay(350);
digitalWrite(LED2, LOW);
delay(350);
digitalWrite(LED2, HIGH);
delay(350);
digitalWrite(LED2, LOW);
delay(350);
digitalWrite(LED2, HIGH);
delay(350);
digitalWrite(LED2, LOW);
delay(200);
digitalWrite(LED3, HIGH);
delay(2000);
digitalWrite(LED3, LOW);
}

