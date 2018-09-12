void setup(){
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(10, OUTPUT); 
pinMode(7, OUTPUT);
pinMode(5, OUTPUT);
}

void loop(){ 
  direita();
  delay(3000);
 esquerda();
  delay (3000);
  frente();
  delay (3000);
}

void frente(){
  // frente
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(10,HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);

}

void tras() {
  // tras
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(10, HIGH);
digitalWrite(5, LOW);
digitalWrite(7, HIGH );

}
void  direita() {
  // Direita
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(10,LOW);
digitalWrite(4,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, HIGH);

}

void esquerda() {
  // Esquerda
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
digitalWrite(4, LOW);
digitalWrite(10,HIGH);
digitalWrite(5, LOW);
digitalWrite(7, HIGH);

}

