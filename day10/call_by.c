// call by value;
#include <stdio.h>
void swap(int x, int y){
    int t=x;
    x=y;
    y=t;
}
int main(){
    int a=5,b=10;
    printf("%d%d",a,b);
    swap(a,b);
    printf("%d%d",a,b);
    return 0;
}