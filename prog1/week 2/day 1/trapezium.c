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
    for (j = 0; j < n; j++)
    {
    if (j > 0)
        {
            for (j = 0; j < n - 1; j++)
            {
                printf(".");
            }
        }
    if (j > 0)
        {
            for (j = 0; j < n * 2; j++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    
    //trapezium zelf
    for (i = 0; i < n; i++)
    {
        if(j > 0)
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