int value = 10;
void setup(){
  Serial.begin(9600);
  pinMode(A0,OUTPUT); 
  digitalWrite(A0, LOW);
  pinMode(7, OUTPUT);
}

void loop(){
  value = analogRead(A0);
  while(value >= 10){
   digitalWrite(7, HIGH);
   value = analogRead(A0);
   Serial.println(value);
  }
  digitalWrite(7, LOW);
}
