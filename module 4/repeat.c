#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main () 
{
    string input_w = get_string("Wat wil je zeggen? = ");
    int input_n = get_int("Hoeveel keren wil je dit zeggen? = ");
    
    int i = 0;
    
    while (i < input_n)
    {
        printf("%s\n", input_w);
        i++;
    }
    
    return 0;
}