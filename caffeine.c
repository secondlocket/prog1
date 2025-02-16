#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main ()
{
    float g = 0;
    int mg;
    int drink = 0;
    //espresso 70mg
    int e = 0;
    //black_tea 30mg
    int b = 0;
    //green tea 20mg
    int g = 0;
    //cocoa 10mg
    int c = 0;
    //piece of chocolate 1mg
    int pc = 0;
    
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
            e++;
        }
        else if (mg > 30)
        {
            mg = mg - 30;
            drink++;
            b++;
        }
        else if (mg > 20)
        {
            mg = mg - 20;
            drink++;
            g++;
        }
        else if (mg > 10)
        {
            mg = mg - 10;
            drink++;
            c++;
        }
        else if (mg > 1)
        {
            mg = mg - 1;
            drink++;
            pc++;
        }
    }
    while (mg > 0);
    
    if (e > 0)
    {
        printf("%i espresso%s\n", e, e == 1 ? "" : "s")
    }
    if (b > 0)
    {
        printf("%i black tea\n", b, b == 1 ? "" : "s")
    }
    if (g > 0)
    {
        printf("%i green tea\n", g)
    }
    if (c > 0)
    {
        printf("%i cocoa\n", c)
    }
    if (pc > 0)
    {
        printf("%i piece of chocolate\n", pc)
    }
    
    printf("That makes %i drink%s in total", drink, drink == 1 ? "" : "s");
    
    return 0;
}