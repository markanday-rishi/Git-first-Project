#include<stdio.h>
int main(){
    float x,count=0,sum=0,avg=1;
    printf("enter your number:");
    scanf("%f",&x);

    float y;
    printf("enter your number:");
    scanf("%f",&y);

    for(int i=x+1;i<y;++i){
        sum+=i;
        count+=1;
    }
    avg=sum/count;

    printf("Average=%.2f",avg);

    return 0;
}