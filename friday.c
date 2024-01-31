#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char newstr[100];
    int i = 0 , j=0;
    printf("C Program to Convert lower case vowel to upper case of String  \n");
    printf("Please enter a string: ");
    fgets(str, 100, stdin);
    while( str[i] != '\0' )
    {
        if (str[i] == ' ' || str[i] == '\t'){
            str[i] = '';
        }
    }
    for (int k=0;k<strlen(newstr);k++){
        if(newstr[k]=='\n'){
            newstr[k] = '\0';
        }
    }
    printf("Vowel after converting into upper case = %s ", newstr);
    return 0;
}