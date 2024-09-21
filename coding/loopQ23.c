#include<stdio.h>
int main(){
    int num;
    printf("Enter your no:");
    scanf("%d",&num);

    while(num>=0){
        
        printf("Enter your no:");
        scanf("%d",&num);

        if(num<0){
            printf("negative number exit");
            break;
        }
    }
    return 0;
}