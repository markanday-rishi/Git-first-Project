#include<stdio.h>
int main(){
    float math;
    printf("enter your marks :");
    scanf("%f",&math);

    float bio;
    printf("enter your marks :");
    scanf("%f",&bio);

    float che;
    printf("enter your marks :");
    scanf("%f",&che);

    float phy;
    printf("enter your marks :");
    scanf("%f",&phy);

    float com;
    printf("enter your marks :");
    scanf("%f",&com);

    float total=0,per=1;

    total=(math+phy+bio+che+com);

    per=total/5;

    printf("percentage:%.2f",per);

    if(per<=100 && per>=90){
        printf("Grade A");
    }
    else if(per<90 && per>=80){
        printf("Grade B");
    }
    else if(per<80 && per>=70){
        printf("Grade C");
    }
    else if(per<70 && per>=60){
        printf("Grade D");
    }
    else if(per<60 && per>=50){
        printf("Grade E");
    }
    else if(per<50 && per>=40){
        printf("Grade f");
    }
    else{
        printf("fail");
    }
}