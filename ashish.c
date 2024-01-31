#include<stdio.h>
int main(){
 int n;
 printf("enter a index of an array");
 scanf("%d",&n);
 int arr[n+1];
 for(int i=0;i<n;i++){
  printf("enter a number:");
  scanf("%d",&arr[i]);
 } 
 int a;
 printf("enter a number which do want to insert at the end:");
 scanf("%d",&a);
 arr[n]=a;
 for(int i=0;i<=n;i++){
  printf("%d\n",arr[i]);
 }
 return 0;

}