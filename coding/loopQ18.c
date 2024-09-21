#include<stdio.h>
int main (){
    int a,b=0,c,remainder;
    printf("enter your no:");
    scanf("%d",&a);

    c=a;


    while(a!=0){
      remainder=a%10;
      b=b*10+remainder;
      a=a/10;

    }
    if(c==b){
      printf("%d is palindrome",c);
    }
    else{
      printf("%d is not palindrome",c);
    }
    return 0;

}