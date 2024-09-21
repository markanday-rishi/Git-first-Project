#include<stdio.h>
int main(){
    int a=9;
    int b=8;
    int c;

    c=a;
    a=b;
    b=c;

    printf("%d\n%d",a,b);

    return 0;
}