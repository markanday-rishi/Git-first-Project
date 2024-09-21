#include<stdio.h>
int main(){
    int angle1;
    printf("enter angle:");
    scanf("%d",&angle1);

    int angle2;
    printf("enter angle:");
    scanf("%d",&angle2);

    int angle3;
    printf("enter angle:");
    scanf("%d",&angle3);

    if(angle1+angle2+angle3!=180){
        printf(" sum of all angle is not 180,so it is not valid triangle");
    }

    else if(angle1==angle2 && angle2==angle3 && angle1==angle3){
        printf("equilateral triangle");
    }
    else if(angle1==angle2 || angle2==angle3 || angle1==angle3){
        printf("isosceles triangle");
    }
    else{
        printf("scalene triangle");
    }

}