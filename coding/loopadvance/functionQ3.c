#include<stdio.h>
int sub(int a,int b);

int main(){
    int a=45;

    int b=15;

    int result=sub(a,b);

    printf("%d",result);

    return 0;


}

int sub(int a,int b){
   

    return a-b;
}




