#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    int n;
    int i;
    int j;
    
    do
    {
        n = get_int("hoe hoog moet het trapezium zijn? = ");
    }
    while(n < 5 || n > 20);
    
    for (i = 0; i < n; i++)
    {
        //eerste regel
    if(j > 0)
        {
            for (j = 0; j < n - 1; j++)
            {
                printf(" ");
            }
        }
    if(j > 0)
        {
            for (j = 0; j < n * 2; j++)
            {
                printf("#");
            }
        }
    }
    

    return 0;
}