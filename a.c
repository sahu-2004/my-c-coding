#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], result;
  int i, len;
  int max = 0;
  int freq[256] = {0};
  printf("C Program to Find Maximum Occurring Character in a String \n");
  printf("Please Enter a String :  ");
  fgets(str, 100, stdin);
  len = strlen(str);
  for (i = 0; i < len; i++)
  {
    freq[str[i]]++;
  }
  
  for (i = 0; i < len; i++)
  {
    printf("%d",freq[str[i]]);
    if (max <= freq[str[i]])
    {
      max = freq[str[i]];
      printf("%d\n",max);
      result = str[i];
      printf("%c\n",str[i]);
    }
  }
  printf("\n Maximum Occurring Character in a String %s is '%c'  %d times", str, result, max);
  return 0;
}