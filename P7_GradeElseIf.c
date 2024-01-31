#include<stdio.h>
void main(){
    int marks;
    printf("Enter the marks of Student : ");
    scanf("%d", &marks);
    if(marks>=80)
    printf("Your Grade is A \n");
    else if (marks>=70)
    {
        printf("Your Grade is B \n");
    }
    else if (marks>=60)
    {
        printf("Your Grade is C \n");
    }else if (marks>=40)
    {
        printf("Your Grade is D \n");
    }
    else
    printf("You are Fail \n");
    
}