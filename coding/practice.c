#include<stdio.h>
int main(){
    float c;
    printf("enter your number:");
    scanf("%f",&c);
    int x=0;
    x=c;
    if (c>=x+0.5){
        printf("%d",x+1);

    }
    else{
        printf("%d",x);
    }
    return 0;
}