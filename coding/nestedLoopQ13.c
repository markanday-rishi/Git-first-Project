#include<stdio.h>
int main(){
    int n=3;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=2*n-i-1;++j){
            printf("  ");
        }
        
        for(int k=1;k<=2*i-1;++k){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}