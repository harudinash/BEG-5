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
     y=y+r;
     
      
  }
  
  printf("%d ",y);
  
  return 0;
}
