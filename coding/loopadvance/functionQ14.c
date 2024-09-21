#include<stdio.h>
int fact(int a);

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    int fac=1;
    while(a!=0){
        int i=1;
        while(i<=a){
            fac=fac*i;
            ++i;
        }
    }

    fact(a);
    printf("Factorial = %d",fac);
}
int fact(int a){
    
    return 0;
}