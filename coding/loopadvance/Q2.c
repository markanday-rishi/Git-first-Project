#include<stdio.h>
int main(){
    int x;

    int max=0,min,sum=0;
    int i=0;
    for(;i<10;++i){
        printf("Enter your number:",i+1);
        scanf("%d",&x);

        
        sum+=x;

        if(i==0){
            max=min=x;
        }
        else{

           if(x>max){
             max=x;
            }

           if (x<min){
              min=x;
            }
        } 
     
    }

    float avg=sum/10.0;    

    printf("maximum number: %d",max);
    printf("\n minimum number: %d",min);
    printf("\n Average of all numbers: %f",avg);

    return 0;
}