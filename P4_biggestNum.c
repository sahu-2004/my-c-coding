#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter two Integer Values: ");
   scanf("%d %d", &a,&b);
   if(a>b){
    printf("%d Value is Greater than %d\n",a,b);
   }
   else{
    printf("%d Value is Greater than %d\n",b,a);
   }
   return 0;
}
