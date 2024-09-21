#include<stdio.h>
int main(){
    int b;
    printf("enter your base:");
    scanf("%d",&b);

    int h;
    printf("enter your height:");
    scanf("%d",&h);

    int a=b*h;

    printf("area of parallelogram is %d",a);

    return 0;
    
}