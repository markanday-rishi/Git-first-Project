#include<stdio.h>
int main(){
    char op;
    printf(" enter an operator(+,-,/,*) ");
    scanf("%c",&op);

    double x;
    printf("enter your number:");
    scanf("%lf",&x);

    double y,result=0;
    printf("enter your number:");
    scanf("%lf",&y);

    switch(op){
        case '+':
        printf("%lf+%lf=%lf",x,y,result=x+y);
        break;

        case '-':
        printf("%lf-%lf=%lf",x,y,result=x-y);
        break;

        case '/':
        printf("%lf / %lf=%lf",x,y,result=x/y);
        break;


        case '*':
        printf("%lf / %lf=%lf",x,y,result=x*y);
        break;

        default:
        printf("error");
        break;

    }
}
