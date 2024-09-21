 #include<stdio.h>
 int main(){
     int basicSalary,hRa,dA,totalBasicSalary;
     printf("Enter your basic Salary:");
     scanf("%d",&basicSalary);
     
    if(basicSalary<=10000){
         hRa = basicSalary * 0.20;
         dA = basicSalary * 0.80;
    }
     else if (basicSalary>10000 && basicSalary<=20000) {
          hRa = basicSalary * 0.25;
          dA = basicSalary  * 0.90;
     }
      else {
         hRa = basicSalary * 0.30;
         dA = basicSalary * 0.95;
    }
        totalBasicSalary = basicSalary + hRa + dA;

        printf("Total Basic Salary = %d",totalBasicSalary);

      return 0;
 }
