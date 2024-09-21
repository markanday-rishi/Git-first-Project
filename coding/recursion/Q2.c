#include<stdio.h>

 void printNumbers(int x){
    
    if(x<=10){
        
        printNumbers (x+1);
        printf("%d\n",x);
        
    }
 }
 int main(void){
    printNumbers(1);
    return 0;
}