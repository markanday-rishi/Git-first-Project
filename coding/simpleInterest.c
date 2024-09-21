#include<stdio.h>
int main(){
    int principal;
    printf("enter your principal:");
    scanf("%d",&principal);

    int rate;
    printf("enter rate:");
    sacnf("%d",&rate);

    int time;
    printf("enter time:");
    scanf("%d",&time);

    float sI=(principal*rate*time)/100;

    printf("simple Interest=%f",sI);

    return 0;
}