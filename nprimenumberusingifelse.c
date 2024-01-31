#include<stdio.h>
int pn(int x){
    if(x==1){
        return x;
    }
    return x;
    if(x>0){
        for(int i=2;i<x;i++){
            if(x%i==0){
                return 0;
            }
       
        }
         return x;
    }
}
int main(){
    int a,b;
            int sum=0;

    printf("enter a number");
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        b=pn(i);
        if(b>0){
        printf("%d\n",b);
        sum=sum+b;
       
    }

        if(i==a){
            break;
        }
    }
     printf("%d",sum);
    return 0;

}