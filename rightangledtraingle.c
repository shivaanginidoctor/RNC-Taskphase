#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a*a + b*b == c*c || b*b+c*c==a*a|| c*c+a*a==b*b)
        printf("it is a right angled triangle\n");
    else
        printf("it is not a right angled triangle\n");
    return 0;
}
