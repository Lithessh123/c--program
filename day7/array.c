#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n+1];
    for(int i=3;i<2;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
}