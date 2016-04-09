byte valor = 0;
int max = 0;
int min = 0;
void setup(){
  Serial.begin(9600);
  pinMode(A15,OUTPUT);
  digitalWrite(A15, LOW);
}
void loop(){
  valor = analogRead(A15);
  if(valor > max){
    max = valor;
  }else if(valor < min){
    min = valor; 
  }
  Serial.print("\nValor: ");
  Serial.print(valor);
  Serial.print(" Max = ");
  Serial.print(max);
  Serial.print(" Min = ");
  Serial.print(min);
  delay(10);
}
