#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main ()
{
    float g = 0;
    int mg;
    int drink = 0;
    //espresso 70mg
    //black_tea 30mg
    //green tea 20mg
    //cocoa 10mg
    //piece of chocolate 1mg
    
    do
    {
        g = get_float("Amount in grams = ");
    }
    while(g < 0.001);
    
    mg = (int) round(g * 1000);
    
    do
    {
        if (mg > 70)
        {
            mg = mg - 70;
            drink++;
        }
        else if (mg > )
    }
    while (mg > 0);
    
    printf("");
    
    return 0;
}