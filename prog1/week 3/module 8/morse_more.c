#include <stdio.h>
#include <cs50.h>
#include <string.h>

//naar_morse functie (van dit ".", dah "-" en spaties)
char naar_morse(char )
{
    
}

int main()
{
    //nummer in het morse array
    int nummer = 0;
    char morse[];
    
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
            
            //karakters afscheiden en printen 1 vóór 1
            else if(rauw[i + 1] == ',' && rauw[i + 2] == ',')
            {
                if (nummer > 0)
                {
                    morse[nummer] = '\0';
                    printf("%c", naar_morse(morse));
                    nummer = 0;
                }
                i += 2;
            }
            
            //spatie tussen symbolen
            else 
            {
                if (input[i] == '=' && input[i + 1] == '=' && input[i + 2] == '=') 
                {
                    morse[nummer++] = '-';
                    i += 2;
                } 
                else if (input[i] == '=') 
                {
                    morse[nummer++] = '.';
                    i += 2;
                }
            }
        }
        
        if (rauw)
        
    }
    
    string morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

