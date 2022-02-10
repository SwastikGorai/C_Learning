#include <stdio.h>

int main(void)
{
    printf("Enter a number : ");
    int a,b;
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d",&b);
    printf("(1)Input Addition\n(2)Substraction\n(3)Multiplication\n(4)Division\n");
    int c;
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        printf("%d", a+b);
        break;

        case 2:
        printf("%d", a-b);
        break;

        case 3:
        printf("%d", a*b);
        break;

        case 4:
        printf("%f", a/b);
        break;

        default:
        printf("Invalid entry");
        break;

    }
}
    