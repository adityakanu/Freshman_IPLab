#include <stdio.h>
int main(){


    int a;
    float myFloat;
    char myChar1;


    scanf ("%d",&a);
    scanf ("%c",&myChar1);
    scanf ("%2lf",&myFloat);
    
    printf ("This is the character'%c'\n", myChar1);
    printf ("This is the int '%d'\n", a);
    printf ("This is the float'%2lf'\n", myFloat);


return 0;
}