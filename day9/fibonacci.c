// int main(){
//     int n=5;
//     int x=1,y=1;
//     int z=0;
//     if(n==0) printf("%d",0);
//     if(n==1){
//             printf("%d",1);
//             return 0;
//     }
//     for(int i=3;i<=5;i++){
//             z=x+y;
//             x=y;
//             y=z;
//         }
// }

#include <stdio.h>
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+ fibo(n-2);
}
int main(){
   
    printf("%d",fibo(7));
}
