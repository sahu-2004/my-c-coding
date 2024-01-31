
#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    printf("Sum is : %d \n", sum);
    return sum; // Return the sum as the result of the function
}

void printMessage()
{
    printf("Good Morning ! \n");
    return; // Return from the function with no value (void)
}

int main()
{
   add(5, 3);
   printMessage();

    return 0;
}
