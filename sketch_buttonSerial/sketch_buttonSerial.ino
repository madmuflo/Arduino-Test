/* BUTTON AND SERIAL!
 * Programma che comunica al canale serial di comunicazione di arduino
 * il valore letto da un pin digitale e regola lo stato di un pin output
 * Arduino UNO
 */

void setup() {
  //inizializzo il canale di comunicazione seriale
  Serial.begin(9600);
  //inizializzo il pin2 come input
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // leggo il valore del pin2
  int val = digitalRead(2);
  //stampo il valore sul serial
  Serial.println(val,DEC);
  //regolo lo status di un pin in output
  if(val==LOW){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }
  

}
