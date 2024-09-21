#include<stdio.h>
int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    for(int i=x;i<y;i++){
        if(i%2==0){
            printf("%d Coding",i);
        }

        else{
            printf("%d Age",i);
        }
        printf("\n");
    }
    return 0;
}
