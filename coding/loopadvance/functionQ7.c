#include<stdio.h>
int multi(int a,int b);

int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);

    int b;
    printf("enter your number:");
    scanf("%d",&b);

    int result=multi(a,b);

    printf("%d",result);

    return 0;


}

int multi(int a,int b){
    int c=a*b;

    return c;
}




