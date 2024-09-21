#include<stdio.h>
int main(){
    int num;
    printf("Enter you number:");
    scanf("%d",&num);

    int i=97;

    int j='a'+num -1;

    while(j>=i){
        printf("%c\n",j--);
       
    }
    return 0;
}