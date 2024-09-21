#include<stdio.h>
int main(){
    int num1,factor;
    printf("Enter your number:");
    scanf("%d",&num1);

    int num2;
    printf("Enter your number:");
    scanf("%d",&num2);

    int i=1;

    while(i<num1 && i<num2){
        if(num1%i==0 && num2%i==0){
            factor=i;
        }
        ++i;
    }
    printf("Factor = %d",factor);


    return 0;
}