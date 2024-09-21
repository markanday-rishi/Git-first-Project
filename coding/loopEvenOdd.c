#include<stdio.h>
int main(){
    int x;
    printf("enter your number:");
    scanf("%d",&x);

    int y;
    printf("enter your number:");
    scanf("%d",&y);

    for(int i=x;i<=y;++i){
        if(i%2==0){
            printf("\nEven Number=%d",i);
        }
        else{
            printf("\nOdd Number=%d",i);
        }
    }
    return 0;
}