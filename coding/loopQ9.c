#include<stdio.h>
int main (){
    int a,count=0;
    printf("enter your no:");
    scanf("%d",&a);

    int b;
    printf("enter your no:");
    scanf("%d",&b);

    int i=a+1;

    while(i<b){
        count+=1;
        ++i;

    }
    printf("count the no between a & b = %d\n",count);

    return 0;

}