#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    if(a>=18){
        printf("cast vote");
    }
    else{
        printf("can't vote");
     }

    return 0;

}    