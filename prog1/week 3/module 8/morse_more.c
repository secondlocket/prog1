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
    int index = 0;
    char morse[];
    
    string rauw = get_string("Code: ");
    
    for (int i = 0; i < strlen(rauw); i++)
    {
        if (rauw[i] == ',')
        {
            //echte spatie (als het 7x ',' is)
            if (strncmp(&rauw[i + 1], ",,,,,,", rauw[i + 6]) == 0)
            {
                printf(" ");
                i += 6;
            }
            
            //karakters afscheiden en printen 1 vóór 1 (als het 3x ',' is)
            else if(rauw[i + 1] == ',' && rauw[i + 2] == ',')
            {
                if (index > 0)
                {
                    morse[index] = '\0';
                    printf("%c", naar_morse(morse));
                    index = 0;
                }
                i += 2;
            }
            
            //als het een ',' of dah '-' of dit '.' is
            else 
            {
                //dah
                if (input[i] == '=' && input[i + 1] == '=' && input[i + 2] == '=') 
                {
                    morse[index++] = '-';
                    i += 3;
                } 
                //dit
                else if (input[i] == '=') 
                {
                    morse[index++] = '.';
                    i ++;
                }
                //','
                else
                {
                    i++;
                }
            }
        }
    }
    
    return 0;
}

