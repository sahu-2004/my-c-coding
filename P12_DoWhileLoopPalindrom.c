#include <stdio.h>
int main()
{
    int a, n, m, reverse = 0;
    printf("Enter a number : " );
    scanf("%d", &n);
    m = n;

    do
    {
        a = n % 10;
        reverse = reverse * 10 + a;
        n = n / 10;
    } while (n>0);
    
    if (m == reverse)
    {
        printf("The number is a palindrome. \n");
    }
    else
    {
        printf("The number is not a palindrome. \n");
    }

    return 0;
}