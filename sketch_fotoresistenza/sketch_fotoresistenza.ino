/* FOTORESISTENZA!
 * Programma che comunica al canale serial di comunicazione di arduino
 * il valore letto da una fotoresistenza e accede i led a seconda dell'intensità
 * Arduino UNO
 */

void setup() {
  //led rosso
  pinMode(2,OUTPUT);
  //led giallo
  pinMode(4,OUTPUT);
  //led verde
  pinMode(7,OUTPUT);
  
  // inizializzo il canale serial
  Serial.begin(9600);

}

void loop() {
  //leggo il valore del potenziometro da A0
  int val = analogRead(0);
  //scrivo sull'output
  Serial.print("Val. Luminosita': ");
  Serial.println(val);
  delay(1000);
  
  if (val < 190){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
  
  if (val > 190 && val < 800){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }
  
  if (val > 800){
    digitalWrite(7, HIGH);
  }else{
    digitalWrite(7, LOW);
  }

}
