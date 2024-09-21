#include<stdio.h>
int main(){
    int num,actualNum,remainder,result=0,count=0;
    printf("Enter Your Number:");
    scanf("%d",&num);

    actualNum=num;

    while(actualNum!=0){
        actualNum/=10;
        count++;
    }

    actualNum=num;

    while (actualNum != 0) {
        int i=1,pow=1;
        remainder = actualNum % 10;
        while(i<=count){
            pow=pow*remainder;
            ++i;
        }
        result+=pow;
        actualNum/=10;
    }
    if(result==num){
        printf("%d is Armstrong Number\n",num);
    }
    else{
        printf("%d is Not Armstrong Number",num);
    }
    return 0;
}