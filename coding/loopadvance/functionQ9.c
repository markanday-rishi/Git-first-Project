#include<stdio.h>
int primeOrNot(int num);

int main(){
    int num,flag;
    printf("Enter your number:");
    scanf("%d",&num);

    flag=primeOrNot(num);
    if(flag==1){
        printf("No is Prime Number");
    }
    else{
        printf("Not a prime number");
    }


}

int primeOrNot(int num){
    int i=2,flag=1;

    while(i<=num/2){
        if(num%i==0){
            return 0;
        }
        else{
            ++i;
        }
        return 1;

    }
}