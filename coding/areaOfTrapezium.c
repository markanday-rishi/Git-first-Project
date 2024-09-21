#include<stdio.h>
int main(){
    int l;
    printf("enter your length:");
    scanf("%d",&l);

    int b;
    printf("enter your length:");
    scanf("%d",&b);

    int h;
    printf("enter your height:");
    scanf("%d",&h);

    int a=h*(l+b)/2;

    printf("area of trapezium is %d",a);

    return 0;
}