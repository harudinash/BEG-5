#include<stdio.h>
int main ()
{
  int a, b[1000000],e=0,i,r,y=0;
  printf ("Input :");
  scanf ("%d", &a);
  printf ("Output : \n");

  while(a)
  {
      r=a%10;
     a=a/10;
     b[y]=r;
     y++;
    
     
      
  }
  for(i=y-1;i>=0;i--)
  printf("%d ",b[i]);
  
  return 0;
}
