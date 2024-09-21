#include <stdio.h>
int main(){
    int i=1;
    for(i=1;i<=3;i++){
        for(int j=i;j<=i+2;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}