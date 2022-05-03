//WAP in C to swap two numbers using function

#include <stdio.h>
void Swap(int *a1, int *b1)
{
    int swapper;
    swapper = *a1;
    *a1 = *b1;
    *b1 = swapper;
}
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("The values of a and b are %d and %d\n", a, b);
    Swap(&a, &b);
    printf("The values of a and b are %d and %d\n", a, b);
    return 0;
}