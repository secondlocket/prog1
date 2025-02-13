#include <stdio.h>
#include <cs50.h>
#include <string.h>

//functie om te controleren of het volgende woord begint met dezelfde letter
//letter is dus de laaste letter van het woord daarvoor
int begint_met(char *woord, char letter)
{
    return tolower(woord[0]) == tolower(letter);
}


int main ()
{
    int beurt = 1;
    char laaste_letter = 0;
    
    //speler1 
    if (beurt == 1)
    {
        string speler1 = get_string("Speler 1, geef een woord = ");
        if (laaste_letter == 0 || begint_met(speler1, laaste_letter))
        {
            laaste_letter = speler1[strlen(speler1) - 1]
            beurt = 2;
        }
        else
        {
            printf("Speler ")
        }
    }
    
    //speler2 
    if (beurt == 2)
    {
        string speler2 = get_string("Speler 2, geef een woord = ");
        beurt = 1
    }
    
    return 0;
}