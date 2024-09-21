#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    int i=2;

    while(i<num){
        if(num%i==1){
            printf("%d",num);
            break;
        }
        ++i;
    }
    while(num>0){
        printf("Enter a number:");
        scanf("%d",&num);
        if(num<0){
            printf("negative number exit");
            break;
        }
    }

}