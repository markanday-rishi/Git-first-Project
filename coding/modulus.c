#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    int b;
    printf("enter your no:");
    scanf("%d",&b);

    int c=a%b;
    printf("modulus of %d & %d is %d",a,b,a%b);
    return 0;
}
