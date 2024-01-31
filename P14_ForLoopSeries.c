#include <stdio.h>
int main()
{
    int i, n, a=0, b=1, sum = 0;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    // a = 0;
    // b = 1;
    printf("%d \n%d", a, b);

    for (i = 2; i < n; i++)
    {
        sum = a + b;
        printf("\n%d", sum);
        a = b;
        b = sum;
    }

    return 0;
}
