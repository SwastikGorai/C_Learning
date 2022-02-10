#include <stdio.h>

int main(void)
{
    printf("enter the radius of the circle : ");
    float r;
    scanf("%f",&r);
    float diameter = 2 * r;
    float circumference = 2 * 3.14 * r;
    float area = 3.14 * r * r;
    printf("%f\n",diameter);
    printf("%f\n",circumference);
    printf("%f\n",area);
    return 0;
}