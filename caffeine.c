#include <stdio.h>
#include <cs50.h>

int main ()
{
    float x = 0;
    
    do
    {
        x = get_float("Amount in grams = ");
    }
    while(x < 0.001);
    
    return 0;
}