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
        
        if (lengte < 8)
        {
            printf("Niet sterk genoeg!");
        }
        
        for (int i = 0; i < lengte; i++)
        {
            char c = invoer[i];
        
            if (invoer[i] == invoer[i + 1])
            {
                printf("Niet sterk genoeg!");
            }
            else if (lengte > 7 && invoer[i] != invoer[i + 1])
            {
                printf("Sterk genoeg!");
            }
            else
            {
                return 1;
            }
        }
    }
    while (lengte < 8);
    
    
    
    
    return 0;
}