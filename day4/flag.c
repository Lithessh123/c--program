#include<stdio.h>
int main(){
   int x=12;
   int flag;
   
   for (int i=1;i<x;i++)//  (i<x/2)
    if(x%i==0)
    flag++;
   
  if(flag==0)
   printf("%d is a prime number",x);
  else 
   printf("%d is not prime number",x);
}