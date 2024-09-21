#include<stdio.h>
int main (){
    int a,b=0,remainder;
    printf("enter your no:");
    scanf("%d",&a);


    while(a!=0){
        remainder=a%10;
        b=b*10+remainder;
        a=a/10;

    }
    printf("reverse number= %d",b);

}