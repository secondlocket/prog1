#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    do
    {
        string invoer = get_string("Wachtwoord? ");
    }
    while (sterk(invoer) == 1);
    
    return 0;
}