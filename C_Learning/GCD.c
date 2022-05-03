//  Write a program in C to find the GCD of two numbers using recursion.

#include <stdio.h>

int hcf(int a, int b)
{
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}

int main()
{
    int a, b, c;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    c = hcf(a, b);
    printf("G.C.D of %d and %d is %d.", a, b, c);
    return 0;
}