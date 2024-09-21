#include<stdio.h>
int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    while(num<=y){
        int actualNum,remainder=0,result=0,fact=1;
    

     actualNum=num;
    
    while(actualNum!=0){
        int i=1;

        remainder=actualNum%10;
        
        while(i<=remainder){
            fact=fact*i;
            ++i;
        }
        result+=fact;

        fact=1;

        actualNum/=10;

    }
    
    if(result==num){
        printf("\n%d is strong number",num);
    }
    
    num++;
    }
    return 0;
}