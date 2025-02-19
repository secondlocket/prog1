#include <stdio.h>
#include <cs50.h>
#include <string.h>

//naar_morse functie (van dit ".", dah "-" en spaties)
char naar_morse(char *morse) {
    if (strcmp(morse, ".-") == 0) return 'a';
    if (strcmp(morse, "-...") == 0) return 'b';
    if (strcmp(morse, "-.-.") == 0) return 'c';
    if (strcmp(morse, "-..") == 0) return 'd';
    if (strcmp(morse, ".") == 0) return 'e';
    if (strcmp(morse, "..-.") == 0) return 'f';
    if (strcmp(morse, "--.") == 0) return 'g';
    if (strcmp(morse, "....") == 0) return 'h';
    if (strcmp(morse, "..") == 0) return 'i';
    if (strcmp(morse, ".---") == 0) return 'j';
    if (strcmp(morse, "-.-") == 0) return 'k';
    if (strcmp(morse, ".-..") == 0) return 'l';
    if (strcmp(morse, "--") == 0) return 'm';
    if (strcmp(morse, "-.") == 0) return 'n';
    if (strcmp(morse, "---") == 0) return 'o';
    if (strcmp(morse, ".--.") == 0) return 'p';
    if (strcmp(morse, "--.-") == 0) return 'q';
    if (strcmp(morse, ".-.") == 0) return 'r';
    if (strcmp(morse, "...") == 0) return 's';
    if (strcmp(morse, "-") == 0) return 't';
    if (strcmp(morse, "..-") == 0) return 'u';
    if (strcmp(morse, "...-") == 0) return 'v';
    if (strcmp(morse, ".--") == 0) return 'w';
    if (strcmp(morse, "-..-") == 0) return 'x';
    if (strcmp(morse, "-.--") == 0) return 'y';
    if (strcmp(morse, "--..") == 0) return 'z';
    return '?';
}
    
int main()
{
    //nummer in het morse array
    int index = 0;
    char morse[10];
    
    string rauw = get_string("Code: ");
    
    for (int i = 0; i < strlen(rauw); i++)
    {
        if (rauw[i] == ',')
        {
            //echte spatie (als het 7x ',' is)
            if (strncmp(&rauw[i + 1], ",,,,,,", 6) == 0)
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
                if (rauw[i] == '=' && rauw[i + 1] == '=' && rauw[i + 2] == '=') 
                {
                    morse[index++] = '-';
                    i += 3;
                } 
                //dit
                else if (rauw[i] == '=') 
                {
                    morse[index++] = '.';
                    i++;
                }
                //','
                {
                    morse[index++;
                    i++;
                }
            }
        }
    }
    
    if (index > 0) 
    {
        morse[index] = '\0';
        printf("%c", naar_morse(morse));
    }
    
    return 0;
}

