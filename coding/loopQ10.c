#include<stdio.h>
int main(){
    int a,sum=0,avg;
    printf("enter your no:");
    scanf("%d",&a);

    int i=0;

    while(i<=a){
        sum=sum+(a-i);
        ++i;
        
    }

    avg=sum/a;

    printf("%d",avg);
}