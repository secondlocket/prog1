#include <stdio.h>
#include <cs50.h>

int main () 
{
    int n;
    do 
    {
        n = get_int("hoe hoog moet de driehoek zijn? = ");
    }
    while(n < 5 || n > 20);
    
    for(int i = 0; i < n; i++)
    {
        for (int y = 0; y < n - i - 1; y++)
        {
            printf(" ");
        }
        
        //#
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        //spatie ertussen
        printf(" ");
        
        //loop L-aligned
        //#
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        //spaties
        for (int y = 0; y < n - i - 1; y++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
    }
}