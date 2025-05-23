#include <stdio.h>
int sort(int x[]){
    int n=sizeof(x)/sizeof(x[0]);
    n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(x[j]>x[j+1]){
                int t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    printf("%d\n",x[n-2]);
    return x[n-2];
}
int main(){
 int arr[]={1,3,4,5,6,7};
 printf("%d",sort(arr));
 return 0;

}