#include<stdio.h>
int main(){
    int a,sumEven=0,sumOdd=0;
    printf("enter your no:");
    scanf("%d",&a);

    int b,i;
    printf("enter your no:");
    scanf("%d",&b);

    i=a+1;

    while(i<b){
        if(i%2==0){
        sumEven+=i;
        }
        else{
           sumOdd+=i;
        }
        ++i;
    }
    printf("Sum of Even between %d & %d =%d\n",a,b,sumEven);
    printf("Sum of Odd between %d & %d =%d\n",a,b,sumOdd);
    
}