#include<stdio.h>
int main (){
    int n=4;
    for(int i=n;i>=1;--i){
        for(int j=0;j<i;++j){
           if(i!=n){
            if(j==0||j==i-1){
                printf(" *");
            }
            else{
                printf("  ");
            }
           }
           else{
            printf(" *");
           }

        }
        printf("\n");
    }
        
    return 0;
}
