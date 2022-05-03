// WAP in C to check whether a number is even or odd using functions.

#include <stdio.h>
void check(int *n)
{
    if (*n % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
}
int main()
{
    int n;
    printf("Enter a positive no. : ");
    scanf("%d", &n);
    if (n > 0)
        check(&n);
    else
    {
        printf("Negative number entered\n");
        main();
    }
    return 0;
}