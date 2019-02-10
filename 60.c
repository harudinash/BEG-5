#include <stdio.h>

int main()
{
    int a,b=0,c[1000000],i,j,z=1;
    printf("Input :");
    scanf("%d",&a);
    
    while(a)
    {
        b=b+z;
        z++;
       a--;
    }
    printf("Output :\n%d",b);
    return 0;
}
