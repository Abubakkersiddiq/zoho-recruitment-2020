
#include <stdio.h>

void main()
{
    int i ,j;
    
    //Declaring the input
    int k = 5;
    
    for(i=k; i>0;i--)
    {
        for(j=k;j>0;j--)
        {
            (i>=j) ? printf("%d",i) : printf("%d",j);
        }
        printf("\n");
    }
    
}
