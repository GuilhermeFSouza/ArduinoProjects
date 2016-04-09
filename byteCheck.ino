int data[9] = {1,0,1,1,0,1,0,0,1};

void setup(){
  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
  Serial.begin(9600);
  digitalWrite(23,1);
  digitalWrite(25,1);
  delay(100);
}

void loop(){
  for(int i=0; i<9; i++){
  if(data[i] > 0){
    Serial.write("1\n");
      digitalWrite(23,LOW);
      digitalWrite(25,HIGH);
    }else{
      Serial.write("0\n");
      digitalWrite(25,LOW);
      digitalWrite(23,HIGH);
    }
  delay(500);
  Serial.write("OUT\n");
    }
  }

