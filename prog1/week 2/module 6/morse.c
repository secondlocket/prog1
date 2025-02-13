#include <stdio.h>
#include <cs50.h>
#include <string.h>

//S = 83 = ...
//O = 79 = ---
//D = 68 = -..
//R = 82 = .-.

//omzetting
char omzetting(const char* morse)
{
    if (strcmp(morse, "..."))
    {
        return("S");
    }
    else if (strcmp(morse, "---"))
    {
        return("O");
    }
    else if (strcmp(morse, "-.."))
    {
        return("D");
    }
    else if (strcmp(morse, ".-."))
    {
        return("R");
    }
    else
    {
        return("?");
    }
}


int main()
{
    string morse = get_string("Geef een morse code: ");
    
    //controleren dat het deelbaar door 3 is
    int check = strlen(morse);
    if (check % 3 != 0)
    {
        printf("Ongeldige morse code\n");
    }
    
    
    
}