#include<stdio.h>
int main(){
    char alpha;
    printf("Enter your alphabets:");
    scanf("%c",&alpha);

    int i=97;

    while(i<=alpha){
        printf("%c\n",alpha--);
    }
    return 0;
}