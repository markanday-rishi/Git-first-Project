#include<stdio.h>
int main (){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    for(int i=1;i<=x;++i){
        for(int j=1;j<=x;++j){
            if((i+j)%2==0){
              if(j==1||j==x){
                printf("*");
               }
               else{
                printf("  ");
               }
            } 
            else{
                if(j==1||j==x){
                printf("#");
               }
               else{
                printf("  ");
               }
            }

        }
        
        printf("\n");
    }
        
    return 0;
}