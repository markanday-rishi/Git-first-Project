#include<stdio.h>
int main(){
    int num;
    printf("enter your number:");
    scanf("%d",&num);

    int y;
    printf("enter your number:");
    scanf("%d",&y);

    while (num<=y)
    {
        int actualNum,remainder,result=0,count=0;
        
          
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
        num++;
    }
    
    return 0;
}