#include<stdio.h>
int main(){
    char a='A';
    for(int i=1;i<=3;++i){
        char b=a;
        for(int j=1;j<=i;++j){
            printf("%c",b);
            ++b;
        }
        ++a;
        printf("\n");
    }
}