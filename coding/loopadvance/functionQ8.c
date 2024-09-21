#include<stdio.h>
void evenOrOdd();

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    
    evenOrOdd(a);

}
void evenOrOdd(int a){
    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}