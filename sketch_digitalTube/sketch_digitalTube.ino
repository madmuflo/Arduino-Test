
//mappo i pin
int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int dp=8;

//quale digit scrivere
int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;

int dig = 0;




void writeDigit(int val){
 
  
  
  
  switch(val){
   case 1:{
     digitalWrite(d1, LOW);
     
     
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
     break; 
   }
   case 2:{
     digitalWrite(d2, LOW);
     
      digitalWrite(d1, HIGH);
  
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
     break; 
   }
   case 3:{
     digitalWrite(d3, LOW);
     
      digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d4, HIGH);
     break; 
   }
   case 4:{
     digitalWrite(d4, LOW);
     
      digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
     break; 
   }
  }
}

void digit(int val){
  switch(val){
    case 0:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,LOW); 
      break;
    }
    case 1:{
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,LOW); 
      break;
    }
    case 2:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);        
      digitalWrite(c,LOW); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,LOW); 
      digitalWrite(g,HIGH);
      break;
    }
    case 3:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,HIGH);
      break;
    }
    case 4:{
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 5:{
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 6:{
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 7:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,LOW); 
      digitalWrite(e,LOW); 
      digitalWrite(f,LOW); 
      digitalWrite(g,LOW);
      break;
    }
    case 8:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,HIGH); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    case 9:{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);        
      digitalWrite(c,HIGH); 
      digitalWrite(d,HIGH); 
      digitalWrite(e,LOW); 
      digitalWrite(f,HIGH); 
      digitalWrite(g,HIGH);
      break;
    }
    
  }
}



void writeNumber(int val){
  
  int u = 0,da = 0,h = 0,k = 0;
  
  int resto = val % 1000;
   k = (val - resto)/1000;
  
  
  int resto2 = resto % 100;
  if(resto2 - resto2>=0)
   h = (resto - resto2)/100;
 
  
   u = resto2 % 10;
  if(resto2 - u>=0)
   da = (resto2 - u)/10;
  
  clearLEDs();
  writeDigit(1);
  digit(da);  
  delayMicroseconds(50);
  
  clearLEDs();
  writeDigit(2);
  digit(h);
  delayMicroseconds(50);
  
  clearLEDs();
  writeDigit(3);
  digit(d);
  delayMicroseconds(50);
  
  clearLEDs();
  writeDigit(4);
  digit(u);
  delayMicroseconds(50);
}


void setup() {
  //imposto i pin in modalità output
  for(int i=1; i<=12; i++)
    pinMode(i,OUTPUT);
    
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

}

void clearLEDs(){
digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW); digitalWrite(d, LOW);
digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW); digitalWrite(dp, LOW);
}

void loop() {
 writeNumber(1);
 
  
  

}
