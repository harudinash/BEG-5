#include <stdio.h>

int main()
{
   int a[20],i,d,j=0,k,l,m,n;
printf("Input :");
scanf("%d",&n);
//printf("output :\n");
for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   printf("output :\n");
     d=1;
for(i=0;i<n;i++)
{
  j=j+a[i];
    

}
j=j/n;
printf("\n%d",j);
return 0;
    
}
    
