int check = 0;
char data[8];
int delayConst = 100;
boolean estado = LOW;

void setup(){
  pinMode(25, OUTPUT);
  pinMode(23, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  check = Serial.readBytes(data, 8);
  delay(delayConst);
  output();
  Serial.println("");
}
void output(){
  for(int i=0; i<8; i++){
    Serial.println(data[i]);
    if(data[i] == 0){
      digitalWrite(23,estado);
      digitalWrite(25,!estado);
    }else{
      digitalWrite(25,estado);
      digitalWrite(23,!estado);
    }
  }
}
