#include <stdio.h>
#include <cs50.h>

int main () {
    int n;
    do
    {
        n = get_int("hoe hoog is je pyramide? (typ iets tussen 1 en 8 in) = ");
    }
    
    while(n < 1 || n > 8);
    
    for(int i = 0; i < n; i++)
    {
        //loop R-aligned
        //spaties
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
        printf("  ");
        
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
    
    return 0;
}