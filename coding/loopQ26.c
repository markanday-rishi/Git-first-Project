#include<stdio.h>
int main() {
    int num1,first=0,next;
    printf("Enter the number: ");
    scanf("%d",&num1);

    int num2;
    printf("enter your number:");
    scanf("%d",&num2);

    int second=1;

    int i = num1;

    while (i <= num2) {
        if (first >= num1 ){
            next = i;}
        else {
            next = first + second;
            second = next;
            first = second;
        }
        printf("%d ", next);
        ++i;
    }

    printf("Fibonacci Series = %d \n", num2);

    return 0;
}