#include<stdio.h>
int main (){
    int a,b=0,original,remainder;
    printf("enter your no:");
    scanf("%d",&a);

    original=a;


    for(;a!=0;){
      remainder=a%10;
      b=b*10+remainder;
      a=a/10;

    }
    if(original==b){
      printf("%d is palindrome",original);
    }
    else{
      printf("%d is not palindrome",original);
    }
    return 0;

}