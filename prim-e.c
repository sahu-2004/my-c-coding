#include <stdio.h>
int pn(int a);
int main() {
  int a, i;
  printf("Enter a number:");
  scanf("%d",&a);
  for (i=1 ;i<=a;i++){
    pn(i);
  }
  return 0;  
}
int pn(int a){
  int i;
  if (a == 1) {
    printf("%d\n",1);
  }
  else if (a > 1) {
    for (i = 2; i < a; i++) {
      if (a % i == 0) {
        return 0;
      }
    }
    printf("%d\n",a);
}}