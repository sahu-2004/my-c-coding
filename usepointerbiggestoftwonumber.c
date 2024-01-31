#include<stdio.h>
int main(){
  int a,b;
  printf("enter first number:");
  scanf("%d",&a);
   printf("enter second number:");
  scanf("%d",&b);

  
  int *ptr=&a;
  int *ptrr=&b;
  if((*ptr)>(*ptrr)){
    printf("a>b");
  }
  else{
    printf("a<b");
  }

 
  return 0;
}