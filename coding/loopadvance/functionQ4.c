#include<stdio.h>
int multi(int a,int b);

int main(){
    int a=150;

    int b=2;

    int result=multi(a,b);

    printf("%d",result);

    return 0;


}

int multi(int a,int b){

    return a*b;
}




