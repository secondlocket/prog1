#include <stdio.h>
#include <cs50.h>

int main ()
{
    float g = 0;
    int mg;
    
    do
    {
        x = get_float("Amount in grams = ");
    }
    while(x < 0.001);
    
    return 0;
}