#include<stdio.h>
int main(){
    int num,flag=1;
    printf("enter your number:");
    scanf("%d",&num);

    int i=2;

    while(i<num){
        if(num%i==0){
            flag=0;
        }i++;

    }
    if(flag==1){
        printf("No is Prime Number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}