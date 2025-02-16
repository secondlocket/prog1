#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //start size
    int n;
    int x;
    
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    
    //end size
    int x;
    
    do
    {
        x = get_int("Start size: ");
    }
    while (x < n);
    // TODO: calculate number of years until we reach threshold

    // TODO: print number of years
}