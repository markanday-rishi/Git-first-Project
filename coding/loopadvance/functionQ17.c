#include<stdio.h>
int pat(int x,int y);

int  main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    pat(x,y);

}
int pat(int x,int y){
    for(int i=1;i<=x;++x){
        for(int j=1;j<=x;++j){
            printf("%c",y);
            ++y;
        }
        for(int k=1;k<x;++k){
            printf("%d",i);
            ++i;
        }
    }
}