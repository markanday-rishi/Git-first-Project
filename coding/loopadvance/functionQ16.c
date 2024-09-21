#include<stdio.h>
int count(int x);
int power(int x);
int armCheck(int x);

int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    count(x);
    power(x);
    armCheck(x);

}
int count(int x){
    int count=0;
    while(x!=0){
        x/=10;
        count++;
    }
    printf("Count=%d",count);
}
int power(int x){
    int original=x;
    int count=0,remainder;
    while(original!=0){
        original/=10;
        count++;
    }
    original=x;

    int result=0;
    while(original!=0){
        int pow=1,i=1;
        remainder=original%10;
        
        while(i<=count){
            pow=pow*remainder;
            ++i;
        }
        result=pow;
        original=original/10;
        printf("\nPower=%d",result);
    }
    return 0;
}
int armCheck(int x){
    int original=x;
    int count=0,remainder;
    while(original!=0){
        original/=10;
        count++;
    }
    original=x;

    int result=0;
    while(original!=0){
        int pow=1,i=1;
        remainder=original%10;
        
        while(i<=count){
            pow=pow*remainder;
            ++i;
        }
        result+=pow;
        original=original/10;
    }
    if(result==x){
        printf("\n%d is Armstrong Number",x);
    }
    else{
        printf("\n%d is Not Armstrong Number",x);
    }

}
