#include<stdio.h>
int main(){
    int a;
    printf("obtained marks:");
    scanf("%d",&a);

    int b;
    printf("passing marks:");
    scanf("%d",&b);

    int c;
    printf("full marks:");
    scanf("%d",&c);
           
    if(b<=a){
        printf("a is pass");
    }
    else{
        printf("a is fail");
     }

    return 0;

}    