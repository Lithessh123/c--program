// adding two numbers using pointer
#include <stdio.h>
int main(){
    int a=5,b=10;
    int *p=&a,*q=&b;
    int sum=*p+*q;
    printf("%d",sum);
    return 0;
}