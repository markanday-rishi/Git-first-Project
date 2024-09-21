#include<stdio.h>
int main(){

    int i=1;
    while(i<=5){

        int j=1;

          while(j<=i){
           printf("%d\n",i);
           break;
           
          }
      ++i;
    }
    printf("%d",i);

    return 0;
}