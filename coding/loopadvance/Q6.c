#include<stdio.h>
int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    int first=0,second=1,next;

    while(next<=y){
       if(next>x){

        printf("\n fibionacci series:%d",next);
       }
       next=first+second;
       first=second;
       second=next;

        
        
    }

    return 0;
}