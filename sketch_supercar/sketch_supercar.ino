
int i = 0;
int verso = 0;

void setup() {
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
}

void loop() {
  
  
  for (i = 2; i<=13; i++){
    
    int val = analogRead(0);
    if (i==13){
      verso = -2;
    }
    if (i==2){
      verso = 0;
    }
    i = i + verso;
    if (i<12){
    digitalWrite(i, HIGH);
    }
    if (i-2 >= 2 && (verso >= 0 || i == 12)){
     digitalWrite(i-2, LOW); 
    }else{
     digitalWrite(i+2, LOW); 
    }
    
    delay(val);
  }

}
