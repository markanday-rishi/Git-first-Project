#include<stdio.h>
int main(){
    int num,product=1;
    printf("enter your number:");
    scanf("%d",&num);

    int i = 1;

    for(i=1;i<=10;++i){
        product=num*i;
        printf("%d*%d =%d\n",num,i,product);
        
    }
    return 0;
}