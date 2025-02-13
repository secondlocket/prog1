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
    
    //speler1 
    if (beurt == 1)
    {
        do
        {
            string speler1 = get_string("Speler 1, geef een woord = ");
            string speler2 = get_string("Speler 2, geef een woord = ");
        }
        while()
    }
    
    if (beurt == 2)
    {
        
    }
    
    return 0;
}