#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main () 
{
    string input_w = get_string("What do you want to say? = ");
    int input_n = get_int("How many times do you want to say this? = ");
    
    int i = 0;
    
    while (i < input_n)
    {
        printf("%s\n", input_w);
        i++;
    }
    
    return 0;
}