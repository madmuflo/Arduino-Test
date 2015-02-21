/* FADE LED + BLINK LED
 * Programma per far sfumare il led 
 * Utilizzo dell'analogWrite e del digitalWrite contemporaneamente
 * Arduino UNO
 */

//stato iniziale della luminosità del led
int brightness = 0; 
//variazione della luminosità del led
int fadeAmount = 5;

void setup() {
  //imposto il pin 9 come pin d'uscita (è un pin analogico) 
  //(NB. possono essere usati tutti i pin d'uscita con l'ondina accanto al numero - che indica uscita analogica)
  pinMode(9, OUTPUT);
  
  //scelgo il pin 2 come pin digitale
  pinMode(2, OUTPUT);

}

void loop() {
  // imposto la luminosità del pin
  analogWrite(9,brightness);
  //aumento la luminosità
  brightness += fadeAmount;
  //quando arrivo al massimo (o al minimo) valore di fade inverto il valore
  if(brightness == 0 || brightness == 255){
   fadeAmount = -fadeAmount; 
   if(brightness == 0){
     digitalWrite(2,HIGH);
   }else{
     digitalWrite(2,LOW);
   }
  }
  
  //aspetto 30ms e loop
  delay(30);
  

}
