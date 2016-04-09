int check = 0;
char data[8];
int delayConst = 10;
boolean estado = LOW;

void setup(){
  pinMode(25, OUTPUT);  //Led verde
  pinMode(23, OUTPUT); //Led vermelho
  Serial.begin(9600);
}
void loop(){
  check = Serial.readBytes(data, 8);
  delay(delayConst);
  for(int i=0; i<8; i++){
    //Serial.println(data[i]);
    if(data[i] == '0'){
      digitalWrite(25,estado);
      digitalWrite(23,!estado);
      delay(delayConst);
      Serial.print("i= ");
      Serial.print(i);
      Serial.println(data[i]);
    }else{
      digitalWrite(25,!estado);
      digitalWrite(23,estado);
      delay(delayConst);
      Serial.print("i= ");
      Serial.print(i);
      Serial.println(data[i]);
    }
  }
  Serial.println("");
}
void output(){
  
}
