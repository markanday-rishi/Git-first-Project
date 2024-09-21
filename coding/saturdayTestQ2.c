#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    int b;
    printf("enter your no:");
    scanf("%d",&b);

    if(a%2==0 && b%2==0){
        printf("product of even = %d",a*b);
    }
    else if(a%2==1 && b%2==1 ){
        printf("sum of odds = %d",a+b);
    }
    else{
        printf("sub of even and odd = %d",a-b);
    }
    return 0;
} 