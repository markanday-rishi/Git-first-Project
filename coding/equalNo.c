#include<stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);

    int b;
    printf("enter your no:");
    scanf("%d",&b);

    int c;
    printf("enter your no:");
    scanf("%d",&c);

    if (a==b){
        printf("a equal b");
         if(b==c){
            printf("b equal c");
         }
         else{
            printf("b not equal c");
         }
    }
    else{
        printf("a not equal to b");
    }
        if(c==b){
            printf("c equal a ");
        }
        else{
            printf("a not equal to c");
        }
    
    return 0;
}