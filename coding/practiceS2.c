#include<stdio.h>
int main(){
    int x,remaind=0,result=0; int p=1; int sum=0;
    printf("enter your number:");
    scanf("%d",&x);

    while(x>0){
        
            remaind=x%2;
            result=x/2;
           
           sum=sum+(p*remaind);
    
        x=result;
        p=p*10;
    }
    printf("%d",sum);
    
}