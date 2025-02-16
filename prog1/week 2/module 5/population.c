#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    int x;
    int years;
    
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

    int d = (n/3 - n/4);
    years = (x - n)/d;
    
    printf("Years = %i", years);
    printf("%i", d)

    return 0;
}