#include <stdio.h>

int main()
{
    int a,b=0,c[1000000],i,j,z=1;
    char y[1000000];
    printf("Input :");
    gets(y);
    scanf("%d",&b);
    
   printf("Output :\n");
   for(i=0;i<b;i++)
   printf("%c",y[i]);
    return 0;
}
