#include<stdio.h>
int main(){
    float r;
    printf("enter your radius:");
    scanf("%f",&r);
    
    float v=r*r*r*22/7*4/3;

    printf("volume of shpere is %f",v);

    return 0;

}