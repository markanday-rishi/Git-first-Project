#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    if(a==0){
        printf("zero");
    }

    if(a>0){
        printf("a is +ve");
    }
    if(a<0){
        printf("a is -ve");
    }

    return 0;

}    
