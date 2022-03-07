#include <stdio.h>
int main(void)
{
    int arr[10];
    for(int i = 0; i<10; i++)
    {
        scanf("%d" , &arr[i]);
    }
    int so = 0, se = 0;
    for(int i = 0; i<10; i++)
    {
        if (arr[i] %2 == 0)
        {
            se= se + arr[i];
        }
        else
        {
            so = so + arr[i];
        }
    }
    printf("Sum of even numbers is %d and sum of odd numbers is %d", se, so);
return 0;
}