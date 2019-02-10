#include <stdio.h>

int main()
{
  int i,j,h,c=0;
  char a[100000];
  printf("Input : ");
  gets(a);
  printf(" Output : \n");
  for(i=0;a[i]!=' ';i++);
  for(j=i+1;a[j]!='\0';j++)
     c++;
     
  if(i>c)
  {
      for(i=0;a[i]!=' ';i++)
       printf("%c",a[i]);
       
  }
else
{
    for(j=i;a[j]!='\0';j++)
     printf("%c",a[j]);
}
    return 0;
}
