#include<stdio.h>
int main(){
    float l;
    printf("enter your length:");
    scanf("%f",&l);

    float b;
    printf("enter your breadth:");
    scanf("%f",&b);

    float p=(l+b)*2;

    printf("perimeter of rectangle is %f",p);

    return 0;
}