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
            //echte spatie
            if (strncmp(&rauw[i + 1], ",,,,,,", rauw[i + 6]) == 0)
            {
                printf(" ");
                i += 6;
            }
            
            //spatie tussen karakters
            if(rauw[i + 1] == ',')
            {
                
            }
            
            //spatie 
        }
        
        if (rauw)
        
    }
    
    string morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

