#include<stdio.h>
int pat(int a);

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    pat(a);
    return 0;
}
int pat(int a){
    for(int i=1;i<=a;++i){
        for(int j=1;j<=2*i-a;++j){
            printf(" *");
        }
        printf("\n");
        for(int k=1;k<=i-a;++k){
            printf("  ");
        }
        printf("\n");
    }
}