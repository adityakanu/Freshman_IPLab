#include <stdio.h>


int main(){
 
    int a;
    int b;


    scanf("%d", &a);
    scanf("%d", &b);

    
    a = a - b;

    b = a + b;

    a = b - a; 

    printf("%d", a);
    printf("\n");
    printf("%d", b);

return 0;
}