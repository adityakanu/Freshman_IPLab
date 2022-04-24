#include <stdio.h>
int main(){
 
    int a;
    int b;

    int temp;


    scanf("%d", &a);
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;

    printf("%d", a);
    printf("\n");
    printf("%d", b);

return 0;
}