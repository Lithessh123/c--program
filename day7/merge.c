#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7};
    int x=(sizeof(arr1)/sizeof(arr1[0]))+(sizeof(arr2)/sizeof(arr2[0]));
    int result[x];
    return 0;
}