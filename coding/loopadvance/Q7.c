#include<stdio.h>
int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int y,remainder,b,j;
    printf("enter your Number:");
    scanf("%d",&y);

    for(int i=x+1;i<=y;++i){
        j=i;
        b=0;
        while(j>0){
            remainder=j%10;
            b=b*10+remainder;
            j=j/10;
        }
        if(i==b){

          printf("\n palindrome number are: %d",i);
   
        }    
    }

    return 0;
}