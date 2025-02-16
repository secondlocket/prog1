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

    float d = (n/3 - n/4);
    years = (x - n)/d;
    
    do
    {
        n += 
    }
    
    printf("Years = %i", years);

    return 0;
}