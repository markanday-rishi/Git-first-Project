#include<stdio.h>
int main (){
    int x;
    printf("enter your number:");
    scanf("%d",&x);

    for(int i=x;i>=1;--i){
        printf("\n%d",i);
    }
}