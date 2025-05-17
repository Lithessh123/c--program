#include<stdio.h>
#include<string.h>
int main(){
    char username[20]="kamal";
    int password=1234;
    char arr[20];
    int x;
    scanf("%s %d",arr,&x);
    if(strcmp(username,arr)==0 &&(password==x))
    printf("logined");
    else
    printf("wrong");
    
    
}