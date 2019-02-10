#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Input :");
   scanf("%d%d",&a,&b);
   printf("Output :\n");
   c=a+b;
   c=c%2;
   if(c==0)
   printf("Even");
   else
   printf("Odd");

return 0;
    
}
    
