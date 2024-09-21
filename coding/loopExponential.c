#include<stdio.h>
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);

    int b;
    printf("enter b:");
    scanf("%d",&b);

    int i=1;
    
    int p=1;

    while(i<=b){
        p=p*a;
        ++i;

    }
    printf("Exonential=%d\n",p);

    return 0;
}