
#include <stdio.h>

int main ()
{
   char yourname[50];
   int yourage;

    printf("Whats your name?\t");
    scanf("%s",&yourname); 
    printf("How old are you?\t");
    scanf("%d",&yourage);
    printf("Welcome to %s with Age %d\n\n\n",yourname,yourage);
    
    return 0;
}
