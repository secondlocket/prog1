#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    int x;
    int d;
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
        x = get_int("Start size: ");
    }
    while (x < n);

    d = n/3 - n/4
    years = (x - n)/d
    
    printf("Years = $i")

    return 0;
}