#include<stdio.h>
int main(){
    int year,leapYear;
    printf("enter your year:");
    scanf("%d",&year);

    leapYear=(year%4==0)&&(year%100!=0)?printf("leapYear"):(year%400==0)?printf("leapYear"):printf("not a leap year");
}