#include<stdio.h>
int main (){
    int a,count=0;
    printf("enter your no:");
    scanf("%d",&a);


    for(count=0;a!=0;count++){
        a=a/10;
        

    }
    printf("count the no is %d\n",count);

}