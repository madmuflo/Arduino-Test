#include <LiquidCrystal.h>
#include <OneWire.h>
#include <DallasTemperature.h>


#define ONE_WIRE_BUS 14
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
float max_t = 0;
float min_t = 0;
float curr = 0;

// inizializza la libreria con i numeri dei pin utilizzati
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
char Str[] = " m@d.muflo       ";
int z = 0;

void setup() {
  sensors.begin();
  sensors.requestTemperatures();
curr = sensors.getTempCByIndex(0);
max_t = curr;
min_t = curr;
  // imposta il numero di colonne e righe del display utilizzato:
  lcd.begin(16, 2);
  // Stampa il messaggio sull'LCD.
  lcd.print(Str);
}
void loop() {
  //TESTO SCORREVOLE
  if(z>=15){
   z=0; 
  }
  
  //INIZIO devvo leggere la stringa 
  char Str_o[16];  
  for (int i = 0; i<16; i++){
    if(i+z+1>15){
      Str_o[i] = Str[i+1+z-15];
    }
    else{
    Str_o[i] = Str[i+z+1];
    } 
  }
  
  
  
    lcd.setCursor(0, 0);
    lcd.print(Str_o);

  
  
  // Metti il cursore alla colonna 0, riga 1
  // (nota: la riga 1 è la seconda perchè il conteggio parte da 0):
  lcd.setCursor(0, 1);
  // Stampa il numero dei secondi trascorsi dal reset:
  sensors.requestTemperatures();
curr = sensors.getTempCByIndex(0);

if(curr>max_t){
  max_t = curr;
}

if(curr<min_t){
  min_t = curr;
}

lcd.print(curr);

  delay(700);
  z++;
}
