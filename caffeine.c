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
    
    if (mg > 0)
    {
        
    }
    
    printf("That makes %i drink%s in total", drink, drink == 1 ? "" : "s");
    printf("%d woord%s met een hoofdletter\n", teller, teller == 1 ? "" : "en"
    
    return 0;
}