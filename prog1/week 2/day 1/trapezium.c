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
    for (i = 0; i < n; i++)
    {
    if (i > 0)
        {
            for (i = 0; i < n - 1; i++)
            {
                printf(".");
            }
        }
    if (i > 0)
        {
            for (i = 0; i < n * 2; i++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    
    //trapezium zelf
    for (i = 0; i < n; i++)
    {
        if (j > 0)
        {
            for (j = 0; y < n - i - 1; y++)
            {
                printf(".");
            }
        }
        printf("#");
        for (j = 0; j < n * 2 - 2; j++)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
    
    
    //laatste regel
    

    return 0;
}