#include<stdio.h>
int pat(int a);

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    pat(a);
}
int pat(int a){
   for(int i=1;i<=a;++i){
        for(int j=1;j<=a;++j){
            printf(" * ");
        }
        printf("\n");
        for(int k=1;k<=a;++k){
            printf("   ");
        }
        printf("\n");
    }
}