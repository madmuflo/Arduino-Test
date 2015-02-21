/* HELLO WORLD!
 * Programma che fa lampeggiare il led al pin13 
 * sia quello sulla scheda che quello sulla pin board
 * Arduino UNO
 */


//definisco la variabile pin su cui andrà il mio output
int ledPin = 13;

//questa funzione lancia le impostazioni iniziali e viene eseguita una sola volta
void setup() {
  //dico al programma di indirizzare l'output sul pin definito prima
  pinMode(ledPin,OUTPUT); 
}

//questa funzione viene eseguita di continuo (rappresenta il programma vero e proprio)
void loop() {
  //dico al pin di accendersi (porto la tensione a high level)
  digitalWrite(ledPin, HIGH);
  //attendo 1000ms
  delay(1000);
  //spengo il led portando la tensione a LOW
  digitalWrite(ledPin, LOW);
  delay(1000);
}
