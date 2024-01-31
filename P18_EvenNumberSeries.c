#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter Nth value of Series : ");
    scanf("%d", &n);
    printf("Even Number Series till %d is : \n", n);
    
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d \t", i);
    }
    printf("\n");
    return 0;
}