#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    int n;
    int i;
    int j;
    int y = 0;
    
    do
    {
        n = get_int("hoe hoog moet het trapezium zijn? = ");
    }
    while (n < 5 || n > 20);
   
    //eerste regel
    for (i = 0; i < n - 1; i++)
        {
            printf(".");
        }
    for (i = 0; i < n * 2; i++)
        {
            printf("#");
        }
        printf("\n");
    
    //trapezium zelf
    for (i = 0; i < n; i++)
    {
        if (j > 0)
        {
            //spaties L
            for (j = 0; y < n - i - 2; y++)
            {
                printf(".");
            }
        
        printf("#");
        
        //spaties binnen
        for (j = 0; j < n * 2 - 2; j++)
        {
            printf(" ");
        }
        
        printf("#");
        
        //spaties R
            for (j = 0; y < n - 1; y++)
            {
                printf(".");
            }
        
        printf("\n");
        }
    }
    
    
    //laatste regel
    

    return 0;
}