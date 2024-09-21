#include<stdio.h>
int main(){
    int x,i;
    printf("Enter your number:");
    scanf("%d",&x);

    i=x;


    for(;i>=0;){

    
        if(i<0){
            printf("\nnegative number exit");
            break;
        }
        int flag=1,num1=0,num2=1,next=0,flag2=0;

        for (int j=2;j<i;++j){

            if(i%j==0){
                flag=0;
            }
        }
        if(flag==1){
            printf("\n%d is prime",i);
        }
        else{
            printf("\n%d is not prime",i);
        }
        int k=0;

        for( k=0;k<i;++k){
            if(k<=1){
                next=k;
            }
            else{
                next=num1+num2;
                num1=num2;
                num2=next;
            }
            if(next==x){
                flag2=1;
            }

        }
        if(flag2==1)
        printf("\nFibonacci number:%d ",i);
        else{
            printf("\n %d is not Fibonacci number",i);
        }
        

        printf("\nEnter your number:");
        scanf("%d",&i);

       

    }
    return 0;
}