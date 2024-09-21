#include<stdio.h>
int main(){
    int a;
    printf("enter your year:");
    scanf("%d",&a);

    if(a%4==0){
        if(a%100!=0){
            printf("leap year");
        }
        else{
            printf("not leap year");
        }
    }
    else{


        if(a%400==0){
            printf("leap year");
        }
        else{
            printf("not leap year");
        }
        return 0;
    }
}