#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n;
    int i;
    
    do
    {
        n = get_int("hoe hoog moet het trapezium zijn? = ");
    }
    while(n < 5 || n > 20);
    
    for (int i = 0; i < n; i++)
    {
        //eerste regel
    if(j > 0)
        {
            for (j = 0; j < n - 1; j++)
            {
                printf(" ");
            }
        }
    if(i > 0)
        {
            for (i = 0; i < n * 2; i++)
            {
                printf("#");
            }
        }
    }
    

    return 0;
}