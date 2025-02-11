#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    int aantal_dagen = 0;
    int totaal_regen;

    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    do
    {
        h = get_int("Hoeveel: ");
        
        if (h == 999 || h < 1)
        {
            printf("Dat kan niet");
            break;
        }
        
        totaal_regen = totaal_regen + h;
        aantal_dagen++;
    
    }
    while (h < 999);
   
   int g = totaal_regen / aantal_dagen;
   
    printf("Gemiddeld %.3d millimeter", g);
    
    return 0;
}