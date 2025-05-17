#include <stdio.h>
int main(){
    // int y=x
    int x;
    scanf("%d",&x);//234
    int y=x;
    int ans=0;
    while(x>0) {
        int r=x%10;
        ans=ans*10+r;
        x=x/10;
    }
    if(ans=y){
        printf("yes\n");
    }
    else{
        printf("no");
    }
        printf("%d\n",ans);
    return 0;
}