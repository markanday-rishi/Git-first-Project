#include<stdio.h>
int main(){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;++j){
            printf("  ");
        }
        for(int k=1;k<=2*(n-i)-1;++k){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}