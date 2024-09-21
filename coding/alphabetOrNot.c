#include<stdio.h>
int main(){
    char ch;
    printf("Enter your character:");
    scanf("%c",&ch);

    if('a'<='z' && 'A'<='Z'){
        printf("charcter is alphabet");
    }
    else{
        printf("not alphabet");
    }
    return 0;
}