#include <stdio.h>
int main(){
 
    int a;
    float f;
    double d;
    char k;
    
    
    printf("Enter your Integer, Float, Double, Char: ");
    scanf("%d" "%f" "%lf" "%c", &a, &f, &d, &k);
    int sizeA= sizeof(a);
    int sizeF= sizeof(f);
    int sizeD= sizeof(d);
    int sizeC= sizeof(k);
    printf("%d"" " "%d"" " "%d"" " "%d", sizeA, sizeF, sizeD, sizeC);

return 0;
}