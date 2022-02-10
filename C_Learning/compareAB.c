#include <stdio.h>

int main(void)
{
    printf("Enter a number : ");
    int a,b;
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d",&b);
    if (a > b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}