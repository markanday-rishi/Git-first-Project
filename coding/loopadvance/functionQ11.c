#include<stdio.h>
int rev(int a);

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    rev(a);
    

}
int rev(int a){
    int b=0,remainder;
    while(a!=0){
        remainder=a%10;
        b=b*10+remainder;
        a=a/10;
    }
    printf("reverse number= %d",b);
    return 0;
}