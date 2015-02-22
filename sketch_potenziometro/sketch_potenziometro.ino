/* POTENZIOMETRO AND SERIAL!
 * Programma che comunica al canale serial di comunicazione di arduino
 * il valore letto da un pin analogico
 * Arduino UNO
 */

void setup() {
  // inizializzo il canale serial
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  //leggo il valore del potenziometro da A0
  int val = analogRead(0);
  
  if(val>357){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
  
  if(val>400){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }
  if(val>700){
    digitalWrite(7, HIGH);
  }else{
    digitalWrite(7, LOW);
  }
  
  
  //scrivo sull'output
  Serial.println(val);
  delay(250);
}
