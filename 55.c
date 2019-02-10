#include<stdio.h>
int main ()
{
  int a, b,e=0,i,r,y=0;
  printf ("Input :");
  scanf ("%d%d", &a,&b);
  printf ("Output : \n");
r=a*b;
  while(r)
  {
      y=r%2;
      r=0;
      
  }
  if(y==0)
  printf("Even ");
  else
  printf("Odd ");
  return 0;
}

