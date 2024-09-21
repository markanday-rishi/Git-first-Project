#include<stdio.h>
int fibio(int a,int b);

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    int b;
    printf("Enter your number:");
    scanf("%d",&b);

    fibio(a,b);

    int first=0,second=1,next=0;
    while(next<=b){
       if(next>=a){
        if(next<=0){
            next=second;
        }

        printf("\n fibionacci series:%d",next);
       }
       next=first+second;
       first=second;
       second=next;
    }


}
int fibio(int a,int b){

    
    return 0;
}