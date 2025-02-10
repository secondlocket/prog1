#include <stdio.h>
#include <cs50.h>


int main () 
{
    string input_w = get_string("Wat wil je zeggen? = ");
    int input_n = get_int("Hoeveel keren wil je dit zeggen? = ");
    char c = input_w
    
    int i = 0;
    
    while (i < input_n + 1)
    {
        printf(\n);
        i++;
    }
    
    return 0;
}