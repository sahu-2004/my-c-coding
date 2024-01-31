#include <stdio.h>
int main()
{
    int n, a, sum = 0, num;
    printf("Enter a number:");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        a = n % 10;    // extract the digits of the number
        sum = sum + a; // sum the digits
        n = n / 10;    // calculate the quotient of a number when divided by 10.
        // printf("Digit = %d , Sum of Digits = %d , Remainder = %d \n", n,sum,a);
    }

    printf("Sum of the  digits= %d \n",  sum);
    return 0;
}