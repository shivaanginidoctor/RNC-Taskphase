#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);
    if (marks>=90)
    {
        printf("grade A");
    }
    else if (80<=marks && marks<90)
    {
        printf("grade B");
    }
    else if (70<=marks && marks<80)
    {
        printf("grade C");
    }
     else if (60<=marks && marks<70)
    {
        printf("grade D");
    }
     else if (marks<60)
      printf("grade F");

    return 0;
}
