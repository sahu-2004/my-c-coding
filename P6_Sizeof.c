#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size Of Integer = %lu Bytes \n", sizeof(a));
    printf("Size Of Float = %lu Bytes \n", sizeof(b));
    printf("Size Of Double = %lu Bytes \n", sizeof(c));
    printf("Size Of Character = %lu Bytes \n", sizeof(d));
    return 0;
}