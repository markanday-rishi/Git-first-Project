#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    if(a%5==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
     }

    return 0;

}    