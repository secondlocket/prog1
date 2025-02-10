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
    
    for (int j = 0; j < n; j++);
    //eerste regel
    if(i > 0)
        {
            for (i = 0; i < n - 1; i++)
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

    return 0;
}