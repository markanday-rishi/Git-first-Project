#include<stdio.h>
int main(){
    int a=1;
    for(int i=1;i<=3;++i){
        int b=a;
        for(int j=1;j<=i;++j){
            printf("%d",b);
            ++b;
        }
        ++a;
        printf("\n");
    }
}