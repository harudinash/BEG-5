#include <stdio.h>

int main()
{
    int a,x=0,r,z,i;
    //clrscr();
    printf("Input :");
    scanf("%d",&a);
    printf("Output :\n");
    if(a==0)
    {
        printf("Invalid");
        x=1;
    }
    if(a==1)
    {
    printf("No");
    x=1;
    }
    if((a==2)||(a==3))
    {
        printf("Yes");
        x=1;
    }
    else if(a>3)
    { r=2;x=0;
        for(i=2;i<a;i++)
        { 
            if(a%i==0)
            
        
            { 
                printf("no");
                x=1;
                break;
            }
        
            r++;
        }
    }
   if(x==0)
   printf("Yes");
    return 0;
}
