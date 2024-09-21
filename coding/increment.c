#include<stdio.h>
int main(){
    int x=10,y=8,result;

    result=++x - --y;
    printf("after y=x++,x is %d,y is %d\n",x,y,result);

    y=y--;
    printf("after y=++x,x is %d,y is %d\n",x,y,result);
}
