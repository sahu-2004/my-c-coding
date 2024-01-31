#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,d,e=0,g;
    printf("enter a number");
    scanf("%d",&a);
    b=a;
    d=a;
    while(b>0){
        c=c+1;
        b=b/10;
    }
    printf("%d\n",c);
    double f;
    while(d>0){
        g=d%10;
        f=(double) pow(g,c);
        e=e+f;
        d=d/10;
    }
    printf("sum of all power is%d\n",e);
    if(e==a){
        printf("the number is armstrong number");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}