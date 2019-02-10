#include<stdio.h>
int main ()
{
  int a, b[1000000],e=0,i,r,y=0;
  printf ("Input :");
  scanf ("%d", &a);
  printf ("Output : \n");
if((a>=1)&&(a<=10))
{
  switch(a)
        {
            case 10: printf("Ten ");
                break;
            case 1: printf("One ");
                break;
            case 2: printf("Two ");
                break;
            case 3: printf("Three ");
                break;
            case 4: printf("Four ");
                break;
            case 5: printf("Five ");
                break;
            case 6: printf("Six ");
                break;
            case 7: printf("Seven ");
                break;
            case 8: printf("Eight ");
                break;
            case 9: printf("Nine ");
                break;
        }
}
 else
 printf("Invalid");
  return 0;
}
