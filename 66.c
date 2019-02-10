#include <stdio.h>

int main()
{
    int a,b,i,j,k,r;
    printf("Input : ");
    scanf("%d",&a);
    printf("Output :\n");
    for(i=0;i<10;i++)
    {
        a++;
        r=a%10;
        if(r==0)
        {
            printf("%d",a);
            break;
        }
    }
        
    
    return 0;
}
