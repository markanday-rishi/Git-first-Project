#include<stdio.h>
int main(){
    int a;
    printf("speed in km/hr:");
    scanf("%d",&a);

    int b;
    printf("speed limit:");
    scanf("%d",&b);

    if(a<=b){
        printf("a is safe");
    }
    else{
        printf("a is unsafe");
     }

    return 0;

}    