#include <stdio.h>
int main(){
 
    int a;
    int b;
    int q;
    int r;

    printf("Enter the first value");
    scanf("%d", &a);

    printf("Enter the second value");
    scanf ("%d", &b);

    q=b/a; 
    r=b%a; 

    printf("%d", q);
    printf("\n");
    printf("%d", r);

 
return 0;
}