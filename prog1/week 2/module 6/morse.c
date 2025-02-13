#include <stdio.h>
#include <cs50.h>
#include <string.h>

//S = 83 = ...
//O = 79 = ---
//D = 68 = -..
//R = 82 = .-.

//omzetting
char omzetting
{
    if (strcmp(morse, "...")
    {
        return("S")
    }
    else if (strcmp(morse, "---"))
    {
        return("O")
    }
    else if (strcmp(morse, "-.."))
    {
        return("D")
    }
    else (strcmp(morse, ".-."))
    {
        return("R")
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