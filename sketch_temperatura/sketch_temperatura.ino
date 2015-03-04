#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 14
OneWire ourWire(ONE_WIRE_BUS);
DallasTemperature sensors(&ourWire);

float max_t = 0;
float min_t = 0;
float curr = 0;

void setup() 
{
delay(1000);
Serial.begin(9600);
Serial.println("Misura la temperatura con sensore DS18B20");
Serial.println("continua la misurazione");
delay(1000);
sensors.begin();
sensors.requestTemperatures();
curr = sensors.getTempCByIndex(0);
max_t = curr;
min_t = curr;
}

void loop() 
{
Serial.println();
sensors.requestTemperatures();
curr = sensors.getTempCByIndex(0);

if(curr>max_t){
  max_t = curr;
}

if(curr<min_t){
  min_t = curr;
}

Serial.print("Temperatura = ");
Serial.print(curr);
Serial.println(" gradi C");
Serial.print("Temperatura MAX= ");
Serial.print(max_t);
Serial.println(" gradi C");
Serial.print("Temperatura MIN= ");
Serial.print(min_t);
Serial.println(" gradi C");
}
