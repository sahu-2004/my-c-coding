#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter Two Number : ");
    scanf("%d %d",&num1,&num2);
    if(num1!=num2){
        printf("%d is not Equql to %d \n",num1,num2);
        if(num1>num2){
            printf("%d is Greater Than %d \n",num1,num2);
        }
        else{
            printf("%d is Less Than %d \n",num1,num2);
        }
    }
    else{
        printf("%d is Equql to %d \n",num1,num2);
    }
}               