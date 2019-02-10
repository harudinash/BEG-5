#include <stdio.h>

int main()
{
  int i,j,h,c=0;
  
  printf("Input : ");
  scanf("%d",&h);
  printf(" Output : \n");
  
  while(h)
  {
      h=h/10;
      c++;
  }
  printf("%d",c);
    return 0;
}
