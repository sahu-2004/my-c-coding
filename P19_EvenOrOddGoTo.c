#include <stdio.h>

// function to check even or not
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    printf("%d is even \n", num);
    // return if even
    return ;
odd:
    printf("%d is odd \n", num);

}
