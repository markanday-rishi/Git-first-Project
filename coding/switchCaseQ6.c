#include<stdio.h>
int main(){
    printf("Week Names");

    int choice;
    printf("\nchoice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tueday");
        break;
        
        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thrusday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default :
        printf("error");
        break;
    }

}