#include<stdio.h>
int main (){
    for(int i=1;i<=3;++i){
        for(int j=2;j<=6;++j){
            if(j%2==0){
                printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
        
    return 0;
}