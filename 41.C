#include<stdio.h>
void main()
{
 int a;
 char s[100000];
 printf("Input : ");
 scanf("%d",&a);
 
 scanf("%s",s);
 printf("Output :\n");
 while(a)
 { printf("%s\n",s);
 a--;
 }
   getch();
