#include<stdio.h>
int main() {
    int n,num1=0,num2=1,next;
    printf("Enter the number: ");
    scanf("%d",&n);

    int i = 0;

    while (i < n) {
        if (i <= 1){
            next = i;}
        else {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }
        printf("%d ", next);
        ++i;
    }

    printf("Fibonacci Series = %d \n", n);

    return 0;
}