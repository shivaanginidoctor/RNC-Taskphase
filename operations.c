#include <stdio.h>
int main()
{
    int a,b,sum,diff,prod,div;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    div=a/b;
    printf(" the sum is=%d\n the difference is=%d\n the product is=%d\n the division is=%d",sum,diff,prod,div);
    return 0;

}
