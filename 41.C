#include<stdio.h>
void main()
{
 int a;
 char s[100000];
 printf("Input : ");
 scanf("%s",s);
 scanf("%d",&a);
 
 
 printf("Output :\n");
 while(a)
 { printf("%s\n",s);
 a--;
 }
   getch();
