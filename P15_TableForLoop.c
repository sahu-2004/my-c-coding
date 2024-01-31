#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Whose Table You want to Print : ");
    scanf("%d", &n);
    printf("Table Of %d is : \n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t*\t%d\t=\t%d\n", n, i, n * i);
    }
    return 0;
}