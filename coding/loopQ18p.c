#include<stdio.h>
int main(){
    int num=1;
    for(num=1;num<=10;++num){
        if(num%3==0){
            continue;
        }
        printf("\n%d",num);
    }
    return 0;
}