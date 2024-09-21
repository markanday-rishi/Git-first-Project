#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);

    int m=2*n;

    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            printf(" ");
        }
        for(int k=n;k>=i;--k){
            printf("%2d ", m--);
            
        }
        printf("\n");
    }
    return 0;
}