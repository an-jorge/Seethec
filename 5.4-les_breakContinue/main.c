#include <stdio.h>

int main()
{
    int iterable;
    for (iterable = 0; iterable <= 15; iterable ++)
        
    {
        printf(" %d \n", iterable);
        
        if (iterable == 10)
        {   
            printf("NUM %d, FIM DO PROGRAMA \n", iterable);
            break;
        }
        
    }
    
}