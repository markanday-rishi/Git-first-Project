#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    if(a<18){
        printf("minor");
    }

    if(a>=18){
        printf("adults");
    }

   
    return 0;

}    