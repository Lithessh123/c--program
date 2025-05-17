#include <stdio.h>
#include <limits.h>
 int main(){
     int x=10;
      x++;
      ++x;
     printf("\n%d",x++);//post increment
     printf("\n%d",x);
     return 0;
 }