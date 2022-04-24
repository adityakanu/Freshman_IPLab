#include <stdio.h>
int main(){
 
    int a;
    float f;
    double d;
    char c;
    
    
    printf("Enter your Integer: ");
    scanf("%d", &a);
    int sizeA= sizeof(a);
    printf("%d", sizeA);

    printf("Enter your Integer: ");
 
return 0;
}