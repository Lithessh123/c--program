// //recurssion
// #include <stdio.h>
// void numbers(int x){ //declaration
//     if(x==0)return; //base condition
//     printf("%d ",x);
//     numbers(x-1);
//     // while(x>0){
//     //     printf("%d ",x);
//     //     x-=1;
//     // }
// }
// int main()
// {
//     numbers(10);
// }

#include <stdio.h>
void numbers(int x){ //declaration
    if(x==5)return; //base condition
    printf("%d ",x);
    numbers(x-1);
}
void numbersdesc(int x){
    if(x==0) return;
    numbers(x-1);
    printf("%d ",x);
}
 int main()
{
    numbers(10);
    printf("\n");
    numbersdesc(10);
}

