
//mappo i pin
int a=7;
int b=6;
int c=5;
int d=11;
int e=10;
int f=8;
int g=9;
int dp=4;


void digit(int val){
  switch(val){
    case 0:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,LOW); 
      break;
    }
    case 1:{
      digitalWrite(b,LOW);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,LOW); 
      break;
    }
    case 2:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,LOW); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,LOW); 
      digitalWrite(g,HIGH);
      break;
    }
    case 3:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,HIGH);
      break;
    }
    case 4:{
      digitalWrite(b,LOW);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 5:{
      digitalWrite(b,HIGH);
      digitalWrite(a,LOW);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 6:{
      digitalWrite(b,HIGH);
      digitalWrite(a,LOW);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 7:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,LOW);
      break;
    }
    case 8:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 9:{
      digitalWrite(b,HIGH);
      digitalWrite(a,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    
  }
}


void setup() {
  //imposto i pin in modalità output
  for(int i=4; i<=11; i++)
    pinMode(i,OUTPUT);

}

void loop() {
  digit(0);
  digitalWrite(dp,LOW);
  delay(500);
  digit(1);
  digitalWrite(dp,HIGH);
  delay(500);
  digit(2);
  digitalWrite(dp,LOW);
  delay(500);
  digit(3);
  digitalWrite(dp,HIGH);
  delay(500);
  digit(4);
  digitalWrite(dp,LOW);
  delay(500);
  digit(5);
  digitalWrite(dp,HIGH);
  delay(500);
  digit(6);
  digitalWrite(dp,LOW);
  delay(500);
  digit(7);
  digitalWrite(dp,HIGH);
  delay(500);
  digit(8);
  digitalWrite(dp,LOW);
  delay(500);
  digit(9);
  digitalWrite(dp,HIGH);
  delay(500);
  

}
