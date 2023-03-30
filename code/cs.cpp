#include<Arduino.h>
int A,B,P,Q; 
int C,R; 
void assign(int C,int R) 
{ 
 digitalWrite(8,R); 
 digitalWrite(6,C); 
} 
 
void setup() 
{ 
 pinMode(2,INPUT); 
 pinMode(3,INPUT); 
 pinMode(4,INPUT); 
 pinMode(5,INPUT); 
 pinMode(6,OUTPUT); 
 pinMode(8,OUTPUT); 
} 
 
void loop() 
{ 
 A = digitalRead(2);   
 B = digitalRead(3);   
 P = digitalRead(4); 
 Q = digitalRead(5); 
 C=(!(!A&&(A||B)))||(B); 
 R=(!Q)||(!P&&(P||Q)); 
  
assign(C,R); 
}
