#include<stdio.h>
int reve(int a);
int check(int a);

int main(){
    int a,original,rev;
    printf("Enter your number:");
    scanf("%d",&a);
   

    original=a;

    reve(a);
    check(a);
    
    
}

int reve(int a){
    int remainder,original=a,rev=0;
    while(a!=0){
        remainder=a%10;
        rev=rev*10+remainder;
        a/=10;
    }
    original==a;
    printf("\nreverse=%d",rev);

 return 0;
}
int check(int a){
    int remainder,original=a,rev=0;
    while(a!=0){
        remainder=a%10;
        rev=rev*10+remainder;
        a/=10;
    }
    if(original==rev){
      printf("\n%d is palindrome",original);
    }
    else{
      printf("\n%d is not palindrome",original);
    }
    return 0;
    printf("\n");
}