#include <stdio.h>

int main()
{
    int a,b,i,j,k,r;
    printf("Input : ");
    scanf("%d%d",&a,&b);
    printf("Output :\n");
     r=a-b;
     r=r%2;
        
        if(r==0)
        {
            printf("Even");
            
        }
        else
        printf("Odd");
    
        
    
    return 0;
}
