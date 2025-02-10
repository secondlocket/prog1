#include <stdio.h>
#include <cs50.h>

int main () 
{
    int n;
    int i;
    do 
    {
        n = get_int("hoe hoog moet de driehoek zijn? (tussen 5 en 20) = ");
    }
    while(n < 5 || n > 20);
    
    for(i = 0; i < n; i++)
    {
        //spatie buiten
        for (int y = 0; y < n - i - 1; y++)
        {
            printf(" ");
        }
        
        printf("#");
        
        //spatie binnen
        for(int j = 1; j <= i; j++)
        {
            printf("..");
        }
        
        printf("#");
        
        //spatie buiten
        for (int y = 0; y < n - i - 1; y++)
        {
            printf(" ");
        }
        
        printf("\n");
        
    }
    
    if(i > 0)
    {
        printf("#");
    }

    return 0;
}