#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    int x;
    int total = 0;
    
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

    //llamas born
    total = n/3



    // TODO: print number of years
}