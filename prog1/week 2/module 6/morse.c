#include <stdio.h>
#include <cs50.h>
#include <string.h>

//S = 83 = ...
//O = 79 = ---
//D = 68 = -..
//R = 82 = .-.

//omzetting functie
char omzetting(const char* morse)
{
    if (strcmp(morse, "...") == 0)
    {
        return('S');
    }
    else if (strcmp(morse, "---") == 0)
    {
        return('O');
    }
    else if (strcmp(morse, "-..") == 0)
    {
        return('D');
    }
    else if (strcmp(morse, ".-.") == 0)
    {
        return('R');
    }
}


int main()
{
    for (int i = 0; i < 999; i++)
    {
        string morse = get_string("Geef een morse code: ");
            if (check % 3 != 0)
        {
            printf("Ongeldige morse code\n");
        }
    }
    
    
    //controleren dat het deelbaar door 3 is
    int check = strlen(morse);
    
    
    for (int i = 0; i < check; i += 3)
    {
        char morse_array[4] = {morse[i], morse[i+1], morse[i+2], '\0'};
        char letter = omzetting(morse_array);
        printf("%c", letter);
    }
    
    printf("\n");
    
    return 0;
}