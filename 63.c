#include <stdio.h>

int main()
{
   int a[20],i,d,j,k,l,m,n;
printf("Input :");
//scanf("%d",&n);
n=10;

for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
     d=1;
     printf("output :\n");
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }
    }
    

}

printf("%d ",a[0]);

return 0;
    
}
    
