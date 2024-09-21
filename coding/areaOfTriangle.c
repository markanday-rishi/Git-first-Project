#include<stdio.h>
int main(){
    int l;
    printf("enter your length:");
    scanf("%d",&l);

    int b;
    printf("enter your breadth:");
    scanf("%d",&b);

    int c=(l*b)/2;

    printf("area of triangle is %d",c);

    return 0;


}