#include<stdio.h>
int main(){
    int x,count=0;
    printf("enter your number:");
    scanf("%d",&x);

    int y;
    printf("enter your number:");
    scanf("%d",&y);

    for(int i=x+1;i<y;++i){
        count+=1;
    }
    printf("count=%d",count);

}