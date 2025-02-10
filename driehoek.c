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
    
    //n - 1 regels
    for(i = 0; i < n - 1; i++)
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
    
    //laatste regel
    if(i > 0)
        {
            for (i = 0; i < n * 2; i++)
            {
                printf("#");
            }
        }

    return 0;
}