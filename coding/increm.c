#include<stdio.h>
int main(){
    int i=1;
    int j=++i + i++;
    printf("%d\n",j);
}