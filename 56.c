#include<stdio.h>
int main ()
{
  int a, b,e=0,i,r,y=0;
  char z[1000000];
  printf ("Input :");
  gets(z);
  printf ("Output : \n");
for(i=0;z[i]!='\0';i++)
{
    if(((z[i]>=65)&&(z[i]<=90))||((z[i]>=97)&&(z[i]<=122)))
    e=1;
    if((z[i]>=48)&&(z[i]<=57))
    y=1;
    //printf("c=%d",z[i]);
}
if((e==1)&&(y==1))
printf("Yes");
else
printf("No");
  return 0;
}

