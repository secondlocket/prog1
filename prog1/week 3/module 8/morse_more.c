#include <stdio.h>
#include <cs50.h>
#include <string.h>

//naar_morse functie (van dit ".", dah "-" en spaties)


int main()
{
    string rauw = get_string("Code: ");
    
    for (int i = 0; i < strlen(rauw); i++)
    {
        if (rauw[i] == ',')
        {
            if (strncmp(&rauw[i], ",,,,,,,", rauw[i + 6]
        }
        
    }
    
    string morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

