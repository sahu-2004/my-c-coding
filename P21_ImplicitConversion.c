#include <stdio.h>
int main()
{
    int a = 65;
    float b = 102.96;
    char c = 'A';
    a = b/a;
    printf("Value of Integer : %d\n", a);
    b = a/b;
    printf("Value of Float : %f\n", b);
    a = c/b;
    printf("Value of Character : %d\n", a);
}