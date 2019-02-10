#include <stdio.h>

int main()
{
    int a,b,c[1000000],i,j,z=0;
    printf("Input :");
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
     {
         scanf("%d",&c[i]);
     }

    for(i=0;i<a;i++)
    {
        if(c[i]==b)
        z=1;
    }
    if(z==1)
    printf("Output :\nYes");
    else
    printf("Output :\nNo");
    return 0;
}
