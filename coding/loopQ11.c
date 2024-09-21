#include<stdio.h>
int main(){
    int a,sum=0;
    printf("enter your no:");
    scanf("%d",&a);

    int b;
    printf("enter your no:");
    scanf("%d",&b);

    int i=a+1;

    int avg=0,count=0;

    while(i<b){ 
        sum=sum+i;
        ++i;
        count+=1;
        
    }
    if(count>0){
        avg=sum/count;
    }

    printf("Sum=%d\n",sum);
    printf("Average=%d",avg);

    return 0;

}