#include<stdio.h>
int main(){
    int x,sumEven=0,sumOdd=0;
    printf("enter your number:");
    scanf("%d",&x);

    int y;
    printf("enter your number:");
    scanf("%d",&y);

    for(int i=x+1;i<y;++i){
        if(i%2==0){
            sumEven+=i;
        }
        else{
            sumOdd+=i;
        }
    }
    printf("\nsum of Even number=%d",sumEven);

    printf("\nsum of Odd number=%d",sumOdd);

    return 0;
}