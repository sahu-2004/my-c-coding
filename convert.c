#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("C Program to Convert lower case vowel to upper case of String  \n");
    printf("Please enter a string: ");
    fgets(str, 100, stdin);
    while( str[i] != '\0' )
    {
        if (str[i] >= 97 && str[i] <= 122){
        str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Vowel after converting into upper case = %s ", str);
    return 0;
}