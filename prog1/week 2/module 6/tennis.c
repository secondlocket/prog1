#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//functie om te controleren of het volgende woord begint met dezelfde letter
//letter is dus de laaste letter van het woord daarvoor
int begin(char *woord, char letter)
{
    return tolower(woord[0]) == tolower(letter);
}


int main ()
{
    int beurt = 1;
    char laaste_letter = 0;
    
    while(1)
    {
        //speler1 
        if (beurt == 1)
        {
            string speler1 = get_string("Speler 1, geef een woord = ");
            if (laaste_letter == 0 || begin(speler1, laaste_letter))
            {
                laaste_letter = speler1[strlen(speler1) - 1];
                beurt = 2;
            }
            else
            {
                printf("Speler 2 wint!");
                break;
            }
        } 
    
        //speler2 
        if (beurt == 2)
        {
            string speler2 = get_string("Speler 2, geef een woord = ");
            if (begin(speler2, laaste_letter))
            {
                laaste_letter = speler2[strlen(speler2) - 1];
                beurt = 2;
            }
            else
            {
                printf("Speler 1 wint!");
                break;
            }
        }
    
    }
    
    return 0;
}