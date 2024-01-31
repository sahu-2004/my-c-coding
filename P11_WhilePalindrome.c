#include <stdio.h>
int main()
{
    
    char a[100], n, m, reverse = 0;
    printf("Enter a number : " );
    scanf("%s", &a);
    m = n;

    while (a[100] < '\n')
    {
        int i=0;
        reverse=reverse+a[i];
        i++;
    }
    printf("%s",reverse);
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