#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);

    int y;
    printf("Enter y:");
    scanf("%d",&y);

    int i=1;

    int p=1;


    for(int i=1;i<=y;++i){
        p*=x;
    }
    printf("exponential=%d",p);
}    