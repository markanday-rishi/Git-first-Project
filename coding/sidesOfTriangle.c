#include<stdio.h>
int main() {
    int a;
    printf("enter your angle1:");
    scanf("%d",&a);

    int b;
    printf("enter your angle2:");
    scanf("%d",&b);

    int c;
    printf("enter your angle3:");
    scanf("%d",&c);

    int d=a+b+c;
    printf("sum of angle is %d\n",d);

    if(d==180){
        printf("valid triangle");
    }
    else{
        printf("not valid trianlge");
    }    
    return 0;
}