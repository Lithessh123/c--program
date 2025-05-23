#include <stdio.h>
int main(){
    char s[]="heyyy!!";
    char *str=&s;
    int c=0;
    while(*str !='\0'){
        c++;
        str++;
    }
    printf("%d",c);
}