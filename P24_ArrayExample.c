#include<stdio.h>
int main()
{
 int i=5, number[5];
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("Enter your Number[%d]:",i);
  scanf("%d",&number[i]);
 }
 //Logic to print number array.
 printf("Number in Array[] :");
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("%d  ", number[i]);
 }
 printf("\n");
}
