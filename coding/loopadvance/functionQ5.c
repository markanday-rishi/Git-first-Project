#include<stdio.h>
int div(int a,int b);
int mod(int a,int b);

int main(){
    int a=240;
    

    int b=8;

    int quotient=div(a,b);
    int remainder=mod(a,b);

    printf("\n%d",quotient);
    printf("\n%d",remainder);

    return 0;


}

int div(int a,int b){

    return a/b;
}

int mod(int a,int b){
    
    return a%b;
}




