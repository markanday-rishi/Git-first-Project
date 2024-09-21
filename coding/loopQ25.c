#include<stdio.h>
int main(){
    int num,actualNum,remainder=0,result=0,fact=1;
    printf("Enter Your Number:");
    scanf("%d",&num);

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
        printf("%d is strong number",num);
    }
    else{
        printf("%d is not strong number",num);
    }
    return 0;
}