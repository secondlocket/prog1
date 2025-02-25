#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int lengte = 0;
    do
    {
        string invoer = get_string("Wachtwoord? ");
        lengte = strlen(invoer);
    }
    while (lengte < 8);
    
    
    for (i = 0; i < strlen(invoer); i++)
    {
        char c = invoer[i];
        
        
    }
    
    
    return 0;
}