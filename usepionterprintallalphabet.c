#include <stdio.h>
int main()
{
    int i;
    char a[26]="abcdefghijklmnopqrstuvwxyz", b[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p,*q;
    p=&a;q=&b;
    for(i=0;i<26;i++)
    {
        printf("%c \t",*p);
        p++;
    }
    for(i=0;i<26;i++)
    {
        printf("%c \t",*q);
        q++;
    }
    return 0;
} 