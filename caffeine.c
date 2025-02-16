#include <stdio.h>
#include <cs50.h>

int main ()
{
    float g = 0;
    int mg;
    
    do
    {
        g = get_float("Amount in grams = ");
    }
    while(g < 0.001);
    
    return 0;
}