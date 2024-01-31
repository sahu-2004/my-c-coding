#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Dividend : ");
    scanf("%d", &a);
    printf("Enter Divisor : ");
    scanf("%d", &b);
    double div = (double)a / b;
    printf("The Result after Division is : %lf \n", div);
    char ch = a;
    printf("%d (Dividend's) ASCII value for : %c \n", a, ch);
    return 0;
}