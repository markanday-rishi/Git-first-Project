#include<stdio.h>
int main (){
    int k;
    printf("enter you ascii value:");
    scanf("%d",&k);

    int n;
    printf("enter your number1:");
    scanf("%d",&n);

    for(int i=1;i<=4;++i){
        for (int j=1;j<=4;++j){
            if(j%2==1){
                printf("%c",k++);
            }
            else{
                printf("%d",n++);
            }
        }
        printf("\n");
    }
}