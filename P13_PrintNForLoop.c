#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter any Number : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d \t", i);
    }
    printf("\n");
}