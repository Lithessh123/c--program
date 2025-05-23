// #include <stdio.h>
// int main(){
//     int a=7;
//     int*p,**p1;
//     p=&a;
//     p1=&p;
//     printf("%d%d",p,p1);
// }
// #include <stdio.h>
// int main(){
// int a=7;
// int*p;
// p=&a;
// printf("%d%d%d%d",a,*p,p,&a);
// *p=8;
// printf("\n%d%d%d%d",a,*p,p,&a);
// }


#include <stdio.h>
int main(){
int a=7;
int*p,*q;
p=&a;
q=p;
*q=1;
*p=4;
printf("%d",a);
}

