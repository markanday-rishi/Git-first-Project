#include<stdio.h>
int sum(int a,int b);

int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);

    int b;
    printf("enter your number:");
    scanf("%d",&b);

    int result=sum(a,b);

    printf("%d",result);

    return 0;


}

int sum(int a,int b){
    int c=a+b;

    return c;
}




