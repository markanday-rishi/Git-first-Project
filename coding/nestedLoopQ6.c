#include<stdio.h>
int main (){
    for(int i=0;i<3;++i){
        int n=0;
        for(int j=0;j<=4;++j){
            if(n==0){
                printf(" *");
                n=1;
            }
            else{
                printf(" #");
                n=0;
            }

        }
        printf("\n");
        n=0;
        for(int k=1;k<=5;++k){
            if(n==0){
                printf(" #");
                n=1;
            }
            else{
                printf(" *");
                n=0;
            }
        }
        printf("\n");
    }
        
    return 0;
}