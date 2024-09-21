#include<stdio.h>
int main(){
    int i=1;
    int k=0;
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    
     while(i<=n){
     if(i%2!=0)     
     k=k+i;
     ++i;
        }

    

    printf("sumof odd=%d",k);
    return 0;
}
 