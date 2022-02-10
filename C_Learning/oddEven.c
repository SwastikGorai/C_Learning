#include <stdio.h>

int main(void)
{
    printf("Enter a number : ");
    int n,k;
    scanf("%d", &n);
    
    switch(n%2)
    {
        case 1:
        printf("Odd");
        break;

        case 0:
        printf("Even");
        break;

        default:
        printf("Invalid");
    }
}