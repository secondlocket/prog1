#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    int totaal_regenregen;
    int g
    

    g = totaal_regen / aantal_dagen

    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    do
    {
        h = get_int("Hoeveel: ");
        
        if (h == 999 || h < 1)
        {
            printf("Dat kan niet");
            break;
        }
    }
    while (h < 999);
   
    printf("Gemiddeld %i millimeter", g);
    
    return 0;
}