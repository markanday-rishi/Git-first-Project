#include<stdio.h>
int main(){
    int i=0;

    int n;
    printf("enter your no:");
    scanf("%d",&n);

    while(i<=n){
        printf("%d\n",n-i);

        ++i;
    }
    return 0;
}