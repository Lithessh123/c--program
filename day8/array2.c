#include <stdio.h>
int main(){
    int size=5,subject=5;
    int roll[size]; //{1,2,3,4,5}
    int mark[size][subject];  //{{100,90,98,34,65},{24,45,67,75,86},{},{},{}}
    int total[size];
    printf("enter all your roll number:");
    for(int i=0;i<size;i++){
        scanf("%d",&roll[i]);
    }
    for(int i=0;i<size;i++){
        printf("enter all the marks of person %d",i+1);
        for(int j=0;j<subject;j++){
            scanf("%d",&mark[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=0;j<subject;j++){
            sum+=mark[i][j];
        }
        total[i]=sum;
    }    
    printf("---------- SCORE CARD ----------\n");
    printf("rollno\ttamil\tenglish\tmaths\tscience\tsocil\ttotal\n");
    for(int i=0;i<size;i++){
        printf("%d",roll[i]);
        for(int j=0;j<subject;j++){
            printf("%d\t",mark[i][j]);
        }
        printf("%d\n",total[i]);
    }
}