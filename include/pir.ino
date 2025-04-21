int val=0;
int pirvalue =LOW;
void setup() {
 pinMode(8,INPUT);
 pinMode(2,OUTPUT);
 Serial.begin(9600);
 

}

void loop() {
  val=digitalRead(8);
  if(val == HIGH){
    if(pirvalue == LOW){
    Serial.println("motion detected");
    digitalWrite(2,HIGH);
    }
    pirvalue=HIGH;
  }
  else

  {
    if(pirvalue == HIGH){
     Serial.println("motion is not detected");
     delay(500);}
     pirvalue = LOW;
    
  }

}
