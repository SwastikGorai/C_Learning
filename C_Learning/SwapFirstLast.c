#include <stdio.h>
#include <math.h>
int main(void)
{
    int d;
    scanf("%d", &d);
    int first,last,backup=d,rev=0,c=1;
    last = d%10;
    while (d>0)
    {
        int r = d%10;
        rev = rev*10 + r;
        d = d/10;
        c*=10;
        
    }
    first = rev%10;

    c/=10;
    
    d = backup;

    int mod = c;
    
    
    d = d%mod;
    
    d = d/10;
   
    d = last*mod + d*10 + first;
    printf("%d \n" , d);

return 0;
}