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
            printf("Niet sterk genoeg!\n");
        }
        
        for (int i = 0; i < lengte - 1; i++)
        {
            if (invoer[i] == invoer[i + 1])
            {
                printf("Niet sterk genoeg!\n");
                invoer = get_string("Wachtwoord? ");
            }
        }
    }
    while (lengte < 8);
    
    printf("Sterk genoeg!");
    
    return 0;
}