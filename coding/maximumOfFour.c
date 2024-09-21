#include <stdio.h>
int main(){
    int v,x,y,z;
    printf("enter your number:");
    scanf("%d %d %d %d",&v,&x,&y,&z);

    if(v>x && v>y && v>z){
        printf("%d is max",v);
    }
    if(y>v && y>x && y>z){
        printf("%d is max",y);
    }
    if(z>v&& z>x && z>y){
        printf("%d is max",z);
    }
    if(x>v && x>y && x>z){
        printf("%d is max",x);
    }
}