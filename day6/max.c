#include<stdio.h>
int main()
{
    int arr[]={1,2,6,4,3,11,2,3,14,5};
    int max=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=length-1;i++){
        if(max <arr[i]) max=arr[i];
    }
    printf("%d",max);
}