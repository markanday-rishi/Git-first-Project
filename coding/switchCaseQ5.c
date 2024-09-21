#include<stdio.h>
int main(){
    printf("Traffic Light\n");

    int choice;
    printf("\n1-GREEN");

    printf("\n2-RED");

    printf("\n3-YELLOW");

    printf("\n4-white\n");

    printf("choice");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Go");
        break;

        case 2:
        printf("Stop");
        break;

        case 3:
        printf("Wait");
        break;

        case 4:
        printf("invalid colour");
        break;

        default:
        printf("error");
        break;


    }




    
}    