#include<stdio.h>
int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);

    if(a%5==0 || a%11==0){
        printf("Number is divisible by 5 or 11");
    }
    else{
        printf("Not divisible by 5 or 11");
    }
    return 0;
}