#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Dividend : ");
    scanf("%d", &a);
    printf("Enter Divisor : ");
    scanf("%d", &b);
    float div = a / b;
    printf("The Result is : %f \n", div);

    return 0;
}