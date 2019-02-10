#include <stdio.h>

int main()
{
    int a,b,c[1000000],i,j,z=0;
    printf("Input :");
    scanf("%d",&a);
    
    while(a)
    {
        z++;
        a=a/10;
    }
    printf("Output :\n%d",z);
    return 0;
}
