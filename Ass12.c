#include <stdio.h>
int main(){
 
    int basicSalary;
    scanf("%d", basicSalary);

    int grossSalary;

    grossSalary= basicSalary + (basicSalary*0.24);

    printf("%d", grossSalary);
    
 
return 0;
}