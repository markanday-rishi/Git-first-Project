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

    if(a>b){
        printf("a is max");
    }else{
        if(b>a){
          printf("b is max");  
        }else{
            if(c>a){
                printf("c is max");
            }else{
                if(a>c){
                    printf("a is max");
                }else{
                    if(b>c){
                        printf("b is max");
                    }else{
                        printf("c is max");
                    }
                }
            }
        }
    }

    return 0;
}