#include<stdio.h>
int main(){
    int r;
    printf("enter your radius:");
    scanf("%d",&r);

    int h;
    printf("enter your height:");
    scanf("%d",&h);

    int a=(r*r*h*22)/7;

    printf("area of circle is %d",a);

    return 0;


}