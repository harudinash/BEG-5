#include<stdio.h>
int main ()
{
  int a, b=1;
  printf ("Input :");
  scanf ("%d", &a);
  printf ("Output : \n");

  while(a)
  {
      b=b*2;
      if(b==a)
     {
         printf("Yes");
         break;
     }
     else if(b<a)
     continue;
     else
     {
         printf("No");
         break;
     }
  }
  
  return 0;
}
