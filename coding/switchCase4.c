#include<stdio.h>
int main(){
    printf("Menu Driven Calculator\n");

    int x;
    printf("\nEnter your number:");
    scanf("%d",&x);

    int y;
    printf("Enter your number:");
    scanf("%d",&y);

    

    int choice;
    
    printf("\n1-Addition");
    
    printf("\n2-Substraction");
    
    printf("\n3-Multiplication");

    printf("\n4-Division\n");

    printf("choice:");

    scanf("%d",&choice);

    

    switch (choice){
        case 1:
        printf("The Addition of %d and %d = %d",x,y,x+y);
        break;

        case 2:
        printf("The Substraction of %d and %d = %d",x,y,x-y);
        break;

        case 3:
        printf("The Multiplication of %d and %d = %d",x,y,x*y);
        break;


        case 4:
        if(y==0){
            printf("infinite");
        }
        else{
            printf("The division of %d and %d = %d",x,y,x/y);
        }
        break;
        
        default:
        printf("error");
        break;

    }
    return 0;
}
