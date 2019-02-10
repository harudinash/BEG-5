#include <stdio.h>

int main()
{
    int a,b=0,c[1000000],i,j,z=1;
    char y[1000000];
    printf("Input :");
    
    gets(y);
    
    
   printf("Output :\n");
   for(i=0;y[i]!='\0';i++)
   {
       if((y[i]=='0')||(y[i]=='1'))
       {
         z=0;
        }
       else
       {
           printf("No");
           z=1;
           break;
           
       }
   }
   if(z==0)
   printf("Yes");
    return 0;
}
