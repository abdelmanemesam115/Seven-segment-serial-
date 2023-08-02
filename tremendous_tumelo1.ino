// C++ code
//
int a=2;
int b=8;
int c=7;
int d=6;
int e=5;
int f=3;
int g=4;
int Reading=0;
void setup()
{
 Serial.begin(9600);
 pinMode(b,OUTPUT);
pinMode(a,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(e,OUTPUT);
pinMode(d,OUTPUT);
pinMode(c,OUTPUT);
}

void loop(){
char reading;
if(Serial.available()>0){
reading=Serial.read();
  switch(reading) {
  case'0':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,0);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
    case'1':
    digitalWrite(b,1);
digitalWrite(a,0);
digitalWrite(f,0);
digitalWrite(g,0);
digitalWrite(e,0);
digitalWrite(d,0);
digitalWrite(c,1);
break;
    
    case'2':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,0);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,0);
break;
    
   case'3':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,0);
digitalWrite(g,1);
digitalWrite(e,0);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
    case'4':
    digitalWrite(b,1);
digitalWrite(a,0);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,0);
digitalWrite(d,0);
digitalWrite(c,1);
break;
    
     case'5':
 digitalWrite(b,0);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,0);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'6':
    digitalWrite(b,0);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'7':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,0);
digitalWrite(g,0);
digitalWrite(e,0);
digitalWrite(d,0);
digitalWrite(c,1);
break;
    
     case'8':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'9':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,0);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'A':
    digitalWrite(b,1);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,0);
digitalWrite(c,1);
break;
    
     case'b':
    digitalWrite(b,0);
digitalWrite(a,0);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'c':
    digitalWrite(b,0);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,0);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,0);
break;
    
     case'd':
    digitalWrite(b,1);
digitalWrite(a,0);
digitalWrite(f,0);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,1);
break;
    
     case'E':
    digitalWrite(b,0);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,1);
digitalWrite(c,0);
break;
    
     case'f':
 digitalWrite(b,0);
digitalWrite(a,1);
digitalWrite(f,1);
digitalWrite(g,1);
digitalWrite(e,1);
digitalWrite(d,0);
digitalWrite(c,0);
break;
    
    
  }
}
}