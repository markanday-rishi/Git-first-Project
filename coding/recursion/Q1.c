#include<stdio.h>

 void printNumbers(int x){
    if(x>=1){
        printNumbers (x-1);
        printf("%d\n",x);
    }
 }
 int main(void){
    printNumbers(10);
    return 0;
}