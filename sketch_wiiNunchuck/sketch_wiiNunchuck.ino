
#include <Wire.h>
#include <ArduinoNunchuk.h> 
#define BAUDRATE 19200

ArduinoNunchuk nunchuk = ArduinoNunchuk();

int prev_AX = 0;
int prev_AY = 0;
int prev_AZ = 0;


void setup() {
  Serial.begin(BAUDRATE); 
  nunchuk.init();
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);


}

void loop() {
  
  nunchuk.update();
 
 Serial.print("X:"); 
 Serial.print(nunchuk.analogX);
 Serial.print(" ");
 Serial.print("Y:"); 
 Serial.print(nunchuk.analogY);
 Serial.print(" ");
 Serial.print("AX:"); 
 Serial.print(nunchuk.accelX, DEC); 
 Serial.print(" ");
 Serial.print("AY:"); 
 Serial.print(nunchuk.accelY, DEC);  
 Serial.print(" ");
 Serial.print("AZ:"); 
 Serial.print(nunchuk.accelZ, DEC);  
 Serial.print(" ");
 Serial.print("Z:"); 
 Serial.print(nunchuk.zButton, DEC);  
 Serial.print(" ");
 Serial.print("C:"); 
 Serial.println(nunchuk.cButton, DEC);  
 Serial.print(" ");


//PULSANTI C-Z
int c = nunchuk.cButton;
int z = nunchuk.zButton;

if(c==HIGH){
 digitalWrite(2,HIGH); 
}else{
 digitalWrite(2,LOW);
}
if(z==HIGH){
 digitalWrite(3,HIGH); 
}else{
  digitalWrite(3,LOW);
}

//LEVETTA ANALOGICA
//X-ANALOG
int cur_x = nunchuk.analogX;
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
if(cur_x>140){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
}
if(cur_x<120){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
}
//Y-ANALOG
int cur_y = nunchuk.analogY;
digitalWrite(4,LOW);
  digitalWrite(7,LOW);
if(cur_y>140){
  digitalWrite(7,HIGH);
  digitalWrite(4,LOW);
}
if(cur_y<120){
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
}

//ACCELEROMETRO
//ASSE-X
int AX = nunchuk.accelX;

if(prev_AX<AX-10){
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);
}
if(prev_AX>AX+10){
  digitalWrite(11,HIGH);
  digitalWrite(8,LOW);
}
prev_AX = AX;

//ASSE-Y
int AY = nunchuk.accelY;
if(prev_AY<AY-10){
  digitalWrite(9,HIGH);
  digitalWrite(12,LOW);
}
if(prev_AY>AY+10){
  digitalWrite(12,HIGH);
  digitalWrite(9,LOW);
}
prev_AY = AY;



//ASSE-Z
int AZ = nunchuk.accelZ;
if(prev_AZ<AZ-10){
  digitalWrite(10,HIGH);
  digitalWrite(13,LOW);
}
if(prev_AZ>AZ+10){
  digitalWrite(13,HIGH);
  digitalWrite(10,LOW);
}
prev_AZ = AZ;

delay(50);

}
