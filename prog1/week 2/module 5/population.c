#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    int x;
    int years = 0;
    
    //start size
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    
    //end size
    do
    {
        x = get_int("End size: ");
    }
    while (x < n);

    while (n < x)
    {
        n += (n/3 - n/4);
        years++;
    }

    printf("Years: %i", years);

    return 0;
}