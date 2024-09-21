#include <stdio.h>
int main(){
    int i=65;
    for(i=65;i<=67;i++){
        for(int j=i;j<=i+2;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}