#include<stdio.h>
int main(){
    int a;
    printf("enter your marks:");
    scanf("%d",&a);
    
    
    if(a<=100 && a>=90){
        printf("grade A+\n");
    }
    else{
        if(a>=80){
            printf("grade B\n");
        }
        else{
            if(a>=70){
                printf("grade C\n");
            }
            else{
                if(a>=60){
                    printf("grade D\n");
                }
                else{
                    if(a>=50){
                        printf("Grade E\n");
                    }
                    else{
                        if(a>=40){
                            printf("grade F\n");
                        }
                        else{
                            printf("fail");
                        }
                    }         
                }
            }
        }

    }
    return 0;
}