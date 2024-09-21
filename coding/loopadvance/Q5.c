#include<stdio.h>
int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int y,flag;
    printf("Enter your number:");
    scanf("%d",&y);

    for(int i=x+1;i<y;i++){
        flag=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                flag+=1;
            }
        }

        if(flag==1){
            printf("\n prime numbers b/w x and y : %d",i);
        }
    }

    
    return 0;
}