#include <stdio.h>
int main()
{
    int arr1[]={5,2,6,4};
    int arr2[]={5,9,7,8};
    int a1= (sizeof(arr1)/sizeof(arr1[0]));
    int a2=(sizeof(arr2)/sizeof(arr2[0]));
    int x =a1+a2;
    int result[x];
    for(int i=0;i<a1;i++){ // insert the element from arr1
        result[i]=arr1[i];
    }
    for(int i=0;i<a2;i++){ //insert the element from arr2
        result[a1+i]=arr2[i];
    }
    //bubble sort
    for (int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(result[j]>result[j+1]){
                int t=result[j];
                result[j]=result[j+1];
                result[j+1]=t;
            }
        }
    }
    for(int i=0;i<x;i++){
        printf("%d\n",result[i]);
    }
    return 0;
}