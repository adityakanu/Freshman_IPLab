#include <stdio.h>
int main(){
 
    int basicSalary;
    scanf("%d", basicSalary);

    double grossSalary;

    grossSalary= basicSalary + (basicSalary*0.12) + (basicSalary*0.07) + (basicSalary*0.05);

    printf("%lf", grossSalary);
    
 
return 0;
}