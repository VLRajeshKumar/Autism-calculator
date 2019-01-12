
int bs[]={0,0,0,0,0,0,0,0,0,0};
int bs1[]={0,0,0,0};
int bs2[]={0,0,0,0,0,0,0,0,0,0};
int state1=0,state2=0;
int a,bb,e,f,c,i,neg,dot,d;
float h;
int b[10],l[10],b1[4],l1[4],b2[10],l2[10],l3[10],l4[10],equal,reset;
void setup() {
b2[0]=13;
b2[1]=12;
b2[2]=11;
b2[3]=10;
b2[4]=9;
b2[5]=8;
b2[6]=7;
b2[7]=6;
b2[8]=5;
b2[9]=4;
neg=40;
equal=A3;
b1[0]=A1;
b1[1]=A2;
b1[2]=A0;
b1[3]=A4;
reset=A7;
dot=44;


b[0]=A5;
b[1]=A6;
b[2]=19;
b[3]=18;
b[4]=17;
b[5]=16;
b[6]=15;
b[7]=14;
b[8]=2;
b[9]=3;

l3[0]=43;
l3[1]=45;
l3[2]=47;
l3[3]=49;
l3[4]=51;
l3[5]=53;
l3[6]=52;
l3[7]=50;
l3[8]=48;
l3[9]=46;


//l1[0]=44;
//l1[1]=46;


l4[0]=41;
l4[1]=39;
l4[2]=37;
l4[3]=35;
l4[4]=33;
l4[5]=31;
l4[6]=29;
l4[7]=27;
l4[8]=25;
l4[9]=23;


pinMode(b[0],INPUT);
pinMode(b[1],INPUT);
pinMode(b[2],INPUT);
pinMode(b[3],INPUT);
pinMode(b[4],INPUT);
pinMode(b[5],INPUT);
pinMode(b[6],INPUT);
pinMode(b[7],INPUT);
pinMode(b[8],INPUT);
pinMode(b[9],INPUT);


pinMode(b2[0],INPUT);
pinMode(b2[1],INPUT);
pinMode(b2[2],INPUT);
pinMode(b2[3],INPUT);
pinMode(b2[4],INPUT);
pinMode(b2[5],INPUT);
pinMode(b2[6],INPUT);
pinMode(b2[7],INPUT);
pinMode(b2[8],INPUT);
pinMode(b2[9],INPUT);

pinMode(l4[0],OUTPUT);
pinMode(l4[1],OUTPUT);
pinMode(l4[2],OUTPUT);
pinMode(l4[3],OUTPUT);
pinMode(l4[4],OUTPUT);
pinMode(l4[5],OUTPUT);
pinMode(l4[6],OUTPUT);
pinMode(l4[7],OUTPUT);
pinMode(l4[8],OUTPUT);
pinMode(l4[9],OUTPUT);
pinMode(l3[0],OUTPUT);
pinMode(l3[1],OUTPUT);
pinMode(l3[2],OUTPUT);
pinMode(l3[3],OUTPUT);
pinMode(l3[4],OUTPUT);
pinMode(l3[5],OUTPUT);
pinMode(l3[6],OUTPUT);
pinMode(l3[7],OUTPUT);
pinMode(l3[8],OUTPUT);
pinMode(l3[9],OUTPUT);
pinMode(dot,OUTPUT);
pinMode(neg,OUTPUT);

pinMode(b1[0],INPUT);
pinMode(b1[1],INPUT);
pinMode(b1[2],INPUT);
pinMode(b1[3],INPUT);
pinMode(equal,INPUT);
pinMode(reset,INPUT);
  Serial.begin(9600);
}


void loop() {
  for( i=0;i<10;i++)
  {
bs[i]=digitalRead(b[i]);
delay(10);
if(bs[i]==HIGH)
{
//digitalWrite(l3[i],HIGH);
Serial.println("buton1 presed");
//f1=1;
a=i;
Serial.print("first value=");
Serial.println(a);
}

  }



for(i=0;i<4;i++)
{
bs1[i]=digitalRead(b1[i]);
delay(10);
if(bs1[i]==HIGH)
{
//digitalWrite(l1[i],HIGH);
c=i;

Serial.println("buton2 presed");
Serial.print("operation selected=");
//f2=1;
if(c==0)
Serial.println("+");
else if(c==1)
Serial.println("-");
else if(c==2)
Serial.println("*");
else if(c==3)
Serial.println("/");
}}

for( i=0;i<10;i++)
  {
bs2[i]=digitalRead(b2[i]);
delay(10);
if(bs2[i]==HIGH)
  {
//digitalWrite(l4[i],HIGH);
bb=i;
//f3=1;

//Serial.println(bb);
Serial.println("buton3 presed");
Serial.print("second value=");
Serial.println(bb);
//Serial.println(flag);
  }}


state1=digitalRead(equal);
if(state1==HIGH)
{
 
  
switch(c){
  case 0:
  {
    d=a+bb;
  Serial.print("sum=");
  Serial.println(d);
  e=d/10;
f=d%10;


digitalWrite(l3[e],HIGH);

digitalWrite(l4[f],HIGH);
  
break;

  }

case 1:
  {
    d=a-bb;
  Serial.print("difference=");
  Serial.println(d);

if(d<0)
{
  d=-d;
  digitalWrite(neg,HIGH);
  
}


  e=d/10;
f=d%10;


digitalWrite(l3[e],HIGH);

digitalWrite(l4[f],HIGH);
break;
  }

case 2:
  {
    d=a*bb;
  Serial.print("product=");
  Serial.println(d);
  e=d/10;
f=d%10;


digitalWrite(l3[e],HIGH);

digitalWrite(l4[f],HIGH);
break;
  }
case 3:
  {
    h=(float)a/bb;
  Serial.print("quotient=");
  digitalWrite(dot,HIGH);
  Serial.println(h);
  d=h*10;
  e=d/10;
f=(d)%10;


digitalWrite(l3[e],HIGH);

digitalWrite(l4[f],HIGH);
break;
  }


  
  
}
}




state2=digitalRead(reset);
//Serial.println(state2);


if(state2==HIGH)
{
  //Serial.print("loop func");
 // digitalWrite(l[on1],LOW);
 // digitalWrite(l1[on2],LOW);
 // digita,lWrite(l2[on3],LOW);
 for(i=0;i<10;i++)
 {
  digitalWrite(l3[i],LOW);
  digitalWrite(l4[i],LOW);
  digitalWrite(dot,LOW);
  digitalWrite(neg,LOW);
 }
 // 
 // delay(1000);
}




}










  

