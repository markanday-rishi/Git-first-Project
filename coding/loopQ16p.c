#include<stdio.h>
int main (){
    int a,remainder=1,b=0;
    printf("enter your no:");
    scanf("%d",&a);


    for(;a!=0;){
        remainder=a%10;
        b=b*10+remainder;
        a=a/10;

    }
    printf("reverse number= %d",b);


}