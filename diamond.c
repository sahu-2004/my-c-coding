#include <stdio.h>
int main(){
  int a ;
  printf("enter a num for*");
  scanf("%d",&a);
  int b=a-1;
  int c=1;

  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
      printf(" ");
    }
    for(int j=1;j<=c;j++){
      if(j%2==1){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    c=c+2;
    b=b-1;
    printf("\n");
  }
  b=1;
  c=c-4;
  for(int i=1;i<a;i++){
    for(int j=1;j<=b;j++){
      printf(" ");
    }
    for(int j=1;j<=c;j++){
      if(j%2==1){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
      c=c-2;
      b=b+1;
      printf("\n");
    
  }
  return 0;
  }