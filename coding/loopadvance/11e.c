#include<stdio.h>
int main (){
    int n=4;
    for(int i=n;i>=1;--i){
        for(int j=1;j<=n-i;++j){
            printf("  ");
        }
        for(int k=i;k>=1;--k){
            if(i!=n){
                if(k==1||k==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
           }
           else{
            printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}