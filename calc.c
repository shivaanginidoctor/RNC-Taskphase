#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("enter op(+,-,*,/)\n");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("%d + %d=%d",a,b,a+b);
        break;

    case '-':
        printf("%d - %d=%d",a,b,a-b);
        break;

     case '*':
        printf("%d * %d=%d",a,b,a*b);
        break;

    case '/':
        printf("%d / %d=%d",a,b,a/b);
        break;

    default
        printf("invalid operator\n");
    }
    return 0;
}
