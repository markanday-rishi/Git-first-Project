#include<stdio.h>
int main(){
    int x,max=0;
    printf("Enter your number:");
    scanf("%d",&x);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    int z;
    printf("Enter your number:");
    scanf("%d",&z);

    max=(x>y)?((x>z)?x:z):((y>z)?y:z);

    printf("%d is maximum",max);

    return 0;
}