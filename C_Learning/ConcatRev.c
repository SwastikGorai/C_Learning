#include <stdio.h>
#include <string.h>
#define MAX_ 10000
int main(void)
{
    char s1[MAX_];
    char s2[MAX_];
    scanf("%s %s" ,s1 , s2);
    strcat(s1,s2);
    int c = strlen(s1);
    for(c; c>=0; c--)
    {
        printf("%c", s1[c]);
    }
return 0;
}