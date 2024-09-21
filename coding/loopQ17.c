#include<stdio.h>
int main (){
    int num,firstDigit,lastDigit,digit;
    printf("enter your no:");
    scanf("%d",&num);

    lastDigit=num%10;


    while(num>=10){
        num/=10;
        firstDigit=num;
    }

    printf("First No:%d\n",firstDigit);

    printf("Last No:%d",lastDigit);


    return 0;

}