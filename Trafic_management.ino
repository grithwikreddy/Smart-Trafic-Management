int del=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(9,INPUT);
pinMode(8,INPUT);
pinMode(11,OUTPUT);
pinMode(6,OUTPUT);
pinMode(2, INPUT);
pinMode(4,INPUT);
pinMode(A3,INPUT);
Serial.begin(9600);
}
void re1(){ //noTone(11);
 // digitalWrite(13,HIGH);
   delay(del);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  while(digitalRead(8)==HIGH && digitalRead(9)==LOW){
    digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  }

  delay(del);

}
void re2(){//digitalWrite(13,HIGH);
//noTone(11);
  delay(del);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
   while(digitalRead(8)==LOW && digitalRead(9)==HIGH){
    digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  }
 delay(del);
}
bool ra=0;
void loop() {//digitalWrite(13,LOW);
int ra = analogRead(A3);
if(ra>1000){
  del=5000;
}
else
del=1000;
Serial.println("Rain Intensity: "+ ra);
if(digitalRead(2)==HIGH){
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(del);
}
if(digitalRead(9)==LOW){
  tone(11, del); 
  delay(100);    
  noTone(11);     
 // delay(del00);     
}
re1();
if(digitalRead(8)==LOW){
  tone(11, del);
  delay(100);       
  noTone(11);    
 // delay(del00); 
}
re2();

//noTone(11);


}