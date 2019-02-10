#include<stdio.h>
int main ()
{
  int a, b[1000000],e=0,i,r,y=0;
  printf ("Input :");
  scanf ("%d", &a);
  printf ("Output : \n");
r=a;
  while(a)
  {
      y=a%2;
      a=0;
      
  }
  if(y==0)
  printf("%d ",r);
  else
  printf("%d ",r-1);
  return 0;
}

