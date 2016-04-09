byte buffer[8];
int pointer = 0;
void setup(){
pinMode(A0, INPUT);
digitalWrite(A0, LOW);
Serial.begin(9600);
}

void loop(){
  while(pointer <= 8){
    Serial.print("\nreading...");
    Serial.print(pointer);
    delay(250);
    if(analogRead(A0)<255){
      buffer[pointer] = 0;
    }else{
      buffer[pointer] = 1;
    }
    pointer++;
    Serial.println("read");
    delay(250);
  }
  for(int i=0; i<=8; i++){
    Serial.print(buffer[i]);
  }
  pointer = 0;
}
