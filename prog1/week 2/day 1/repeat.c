#include <stdio.h>
#include <cs50.h>


void main () 
{
    string input_w = get_string("Wat wil je zeggen? = ");
    int input_n = get_int("Hoeveel keer wil je dit zeggen? = ");
    
    int i = 0;
    
    while (i < input_n)
    {
        printf(input_w);
        i++;
    }
    
    return 0;
}