#include<stdio.h>
int main (){
    int a,num=0;
    printf("enter your no:");
    scanf("%d",&a);

    int maxNum;

    int minNum;

    maxNum=minNum=a%10;


    while(a>0){
        num=a%10;
        a/=10;

        if(num>maxNum){
            maxNum=num;
        }

        if(num<minNum){
            minNum=num;
        }

    }

    printf("Max No:%d\n",maxNum);

    printf("Min No:%d",minNum);


    return 0;

}