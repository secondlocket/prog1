#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main ()
{
    float g = 0;
    int mg;
    //espresso
    //black_tea
    //green tea
    //cocoa
    //piece of chocolate
    
    do
    {
        g = get_float("Amount in grams = ");
    }
    while(g < 0.001);
    
    mg = (int) round(g * 1000);
    
    do
    {
        
    }
    while ()
    
    return 0;
}