#include<stdio.h>
int main (){
    int c;
    printf("enter your number:");
    scanf("%d",&c);
    
    for(int i=1;i<=c;++i){
        for(int j=1;j<=c;++j){
            if(j%2==1){
                printf("#");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}