#include<stdio.h>
int main(){
    int a;
    printf("obtained marks:");
    scanf("%d",&a);

    int b;
    printf("passing marks:");
    scanf("%d",&b);

    if(a>=b){
        printf("a is pass");
    }
    else{
        printf("a is fail");
     }

    return 0;

}    