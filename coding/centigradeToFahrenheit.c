#include<stdio.h>
int main(){
    float c;
    printf("enter temperature in celsius:");
    scanf("%f",&c);

    float f=32+(c*9/5);

    printf("temperature in fahrenheit is %f",f);

    return 0;
} 