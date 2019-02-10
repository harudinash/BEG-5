#include <stdio.h>

int main()
{
  int i,j,h,c=0;
  char a[100000];
  printf("Input : ");
  gets(a);
  printf(" Output : \n");
  
  for(j=0;a[j]!='\0';j++)
    { 
  if(a[j]!=' ')
  {
             printf("%c",a[j]);
       
  }
  else
   continue;
}
